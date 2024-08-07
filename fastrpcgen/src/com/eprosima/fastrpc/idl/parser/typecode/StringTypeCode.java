// Copyright 2024 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

package com.eprosima.fastrpc.idl.parser.typecode;

import com.eprosima.fastcdr.idl.context.Context;
import com.eprosima.idl.parser.exception.RuntimeGenerationException;
import com.eprosima.idl.parser.typecode.Kind;

public class StringTypeCode extends com.eprosima.idl.parser.typecode.StringTypeCode
    implements TypeCode
{
    public StringTypeCode(
            int kind,
            String maxsize,
            String evaluated_maxsize)
    {
        super(kind, maxsize, evaluated_maxsize);
    }

    @Override
    public long maxSerializedSize(
            long current_alignment)
    {
        long initial_alignment = current_alignment;
        long maxsize = Long.parseLong(getEvaluatedMaxsize(), 10);

        switch (getKind())
        {
            case Kind.KIND_STRING:
                current_alignment += 4 + TypeCode.cdr_alignment(current_alignment, 4) + maxsize + 1;
                break;
            case Kind.KIND_WSTRING:
                current_alignment += 4 + TypeCode.cdr_alignment(current_alignment, 4) + (maxsize *
                        (ctx instanceof com.eprosima.fastcdr.idl.context.Context && ((com.eprosima.fastcdr.idl.context.Context)ctx).isCdrv1TemplatesEnabled()
                         ? 4 : 2
                        ));
                break;
        }

        return current_alignment - initial_alignment;
    }

    @Override
    public long maxPlainTypeSerializedSize(
            long current_alignment,
            long align64) throws RuntimeGenerationException
    {
        throw new RuntimeGenerationException("StringTypeCode::maxPlainTypeSerializedSize(): Strings are not plain types.");
    }

    @Override
    public String getCppTypename()
    {
        if (Kind.KIND_STRING == getKind() && isIsBounded() && ctx instanceof com.eprosima.fastcdr.idl.context.Context && ((com.eprosima.fastcdr.idl.context.Context)ctx).isCdrv1TemplatesEnabled())
        {
            return "eprosima::fastrtps::fixed_string<" + getMaxsize() + ">";
        }

        return super.getCppTypename();
    }
}
