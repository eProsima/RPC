/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcrest_LICENSE file included in this rpcrest distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorProxy.cxx
 * This source file contains the definition of the proxy for all interfaces.
 *
 * This file was generated by the tool rpcrestgen.
 */

#include "CalculatorProxy.h"
#include "rpcrest/transports/ProxyTransport.h"
#include "CalculatorProtocol.h"

namespace Calculator
{
    addResourceProxy::addResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
        eprosima::rpc::protocol::CalculatorProtocol &protocol) : Proxy(transport, protocol)
    {
        protocol.activateInterface("Calculator::addResource");
    }

    addResourceProxy::~addResourceProxy()
    {
    }




    Calculator::addResource::AddResponse addResourceProxy::add(/*in*/ int32_t a, /*in*/ int32_t b)
    {
        Calculator::addResource::AddResponse add_ret =
        dynamic_cast<eprosima::rpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_addResource_add(a, b);
        return add_ret;
    }



    substractResourceProxy::substractResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
        eprosima::rpc::protocol::CalculatorProtocol &protocol) : Proxy(transport, protocol)
    {
        protocol.activateInterface("Calculator::substractResource");
    }

    substractResourceProxy::~substractResourceProxy()
    {
    }




    Calculator::substractResource::SubstractResponse substractResourceProxy::substract(/*in*/ int32_t a, /*in*/ int32_t b)
    {
        Calculator::substractResource::SubstractResponse substract_ret =
        dynamic_cast<eprosima::rpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_substractResource_substract(a, b);
        return substract_ret;
    }



    multiplyResourceProxy::multiplyResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
        eprosima::rpc::protocol::CalculatorProtocol &protocol) : Proxy(transport, protocol)
    {
        protocol.activateInterface("Calculator::multiplyResource");
    }

    multiplyResourceProxy::~multiplyResourceProxy()
    {
    }




    Calculator::multiplyResource::MultiplyResponse multiplyResourceProxy::multiply(/*in*/ int32_t a, /*in*/ int32_t b)
    {
        Calculator::multiplyResource::MultiplyResponse multiply_ret =
        dynamic_cast<eprosima::rpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_multiplyResource_multiply(a, b);
        return multiply_ret;
    }



    divideResourceProxy::divideResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
        eprosima::rpc::protocol::CalculatorProtocol &protocol) : Proxy(transport, protocol)
    {
        protocol.activateInterface("Calculator::divideResource");
    }

    divideResourceProxy::~divideResourceProxy()
    {
    }




    Calculator::divideResource::DivideResponse divideResourceProxy::divide(/*in*/ int32_t a, /*in*/ int32_t b)
    {
        Calculator::divideResource::DivideResponse divide_ret =
        dynamic_cast<eprosima::rpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_divideResource_divide(a, b);
        return divide_ret;
    }



};