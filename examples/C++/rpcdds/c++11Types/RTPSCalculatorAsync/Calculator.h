// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file Calculator.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include <fastcdr/config.h>
#include "Calculatorv1.h"

#if FASTCDR_VERSION_MAJOR > 1

#ifndef _RPC_GENERATED_CALCULATOR_H_
#define _RPC_GENERATED_CALCULATOR_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include <rpcdds/exceptions/UserException.h>



#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(CALCULATOR_SOURCE)
#define CALCULATOR_DllAPI __declspec( dllexport )
#else
#define CALCULATOR_DllAPI __declspec( dllimport )
#endif // CALCULATOR_SOURCE
#else
#define CALCULATOR_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define CALCULATOR_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



/*!
 * @brief This class represents the interface Calculator defined by the user in the IDL file.
 * @ingroup Calculator
 */
class CALCULATOR_DllAPI Calculator 
{
public:

    virtual int32_t addition(
            /*in*/ int32_t value1,
            /*in*/ int32_t value2) = 0;


    virtual int32_t subtraction(
            /*in*/ int32_t value1,
            /*in*/ int32_t value2) = 0;


};

#endif // _RPC_GENERATED_CALCULATOR_H_

#endif // FASTCDR_VERSION_MAJOR > 1
