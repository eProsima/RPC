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
 * @file CalculatorProtocol.h
 * This header file contains the declaration of the interface for all protocols.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Calculator_PROTOCOL_H_
#define _Calculator_PROTOCOL_H_

#include <rpcdds/protocols/Protocol.h>
#include "Calculator.h"
#include "CalculatorAsyncCallbackHandlers.h"

#include "CalculatorServerImpl.h"


namespace eprosima
{
    namespace rpc
    {
        namespace protocol
        {
            /*!
             * @brief Protocol base class for the specific application
             * @ingroup Calculator
             */
            class RPCUSERDllExport CalculatorProtocol : public Protocol
            {
                public:

                   /*!
                    * @brief This method sets the transport for the communications. It has to be implemented by the children classes.
                    * @param transport Transport to use.
                    * @return True if the assignment is successful, false otherwise
                    */
                    virtual bool setTransport(eprosima::rpc::transport::Transport &transport) = 0;

                        /*!
                         * @brief In some protocols this function activates needed entities to use an interface.
                         * @param interfaceName Interface name.
                         * @return Whether the activation works successfully.
                         */
                    virtual bool activateInterface(const char* interfaceName) = 0;

                                       /*!
                                        * @brief This method links a specific servant with the protocol.
                                        * @param impl Servant implementation.
                                        */
                                        void linkCalculatorImpl(CalculatorServerImpl &impl)
                                        {
                                            _Calculator_impl = &impl;
                                        }


                    /*!
                     * @brief This method implements the proxy part of the protocol for the operation addition.
                     *        It has to be implemented by the child classes.
                     */
                    virtual int32_t Calculator_addition(
                            /*in*/ int32_t value1,
                            /*in*/ int32_t value2) = 0;

                    /*!
                     * @brief This asynchronous method implements the proxy part of the protocol for the operation addition.
                     *        It has to be implemented by the child classes.
                     */
                    virtual void Calculator_addition_async(
                            Calculator_additionCallbackHandler &obj, /*in*/ int32_t value1,
                                                                     /*in*/ int32_t value2) = 0;


                    /*!
                     * @brief This method implements the proxy part of the protocol for the operation subtraction.
                     *        It has to be implemented by the child classes.
                     */
                    virtual int32_t Calculator_subtraction(
                            /*in*/ int32_t value1,
                            /*in*/ int32_t value2) = 0;

                    /*!
                     * @brief This asynchronous method implements the proxy part of the protocol for the operation subtraction.
                     *        It has to be implemented by the child classes.
                     */
                    virtual void Calculator_subtraction_async(
                            Calculator_subtractionCallbackHandler &obj, /*in*/ int32_t value1,
                                                                        /*in*/ int32_t value2) = 0;





                protected:

                    CalculatorProtocol() : Protocol()
                                        , _Calculator_impl(NULL)

                    {}

                    virtual ~CalculatorProtocol(){}

                	                    CalculatorServerImpl *_Calculator_impl;


            };
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _Calculator_PROTOCOL_H_