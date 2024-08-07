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
 * @file CalculatorAsyncCallbackHandlers.h
 * This header file contains the declaration of callback handlers used in asynchronous calls.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Calculator_ASYNC_CALLBACK_HANDLERS_H_
#define _Calculator_ASYNC_CALLBACK_HANDLERS_H_

#include <rpcdds/exceptions/SystemException.h>
#include <rpcdds/exceptions/UserException.h>
#include "Calculator.h"

/*!
 * @brief This abstract class defines the callbacks that eProsima RPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 * @ingroup Calculator
 */
class Calculator_additionCallbackHandler
{
    public:
        /*!
         * This function is called when is received the reply from the server.
         */
        virtual void addition(
                /*out*/ int32_t return_) = 0;

        /*!
         * @brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * @param ex The exception that will be launched.
         */
        virtual void on_exception(const eprosima::rpc::exception::SystemException &ex) = 0;
};


/*!
 * @brief This abstract class defines the callbacks that eProsima RPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 * @ingroup Calculator
 */
class Calculator_subtractionCallbackHandler
{
    public:
        /*!
         * This function is called when is received the reply from the server.
         */
        virtual void subtraction(
                /*out*/ int32_t return_) = 0;

        /*!
         * @brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * @param ex The exception that will be launched.
         */
        virtual void on_exception(const eprosima::rpc::exception::SystemException &ex) = 0;
};





#endif // _Calculator_ASYNC_CALLBACK_HANDLERS_H_