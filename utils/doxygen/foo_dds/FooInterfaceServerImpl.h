/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file FooInterfaceServerImpl.h
 * This header file contains the declaration of the skeleton for all interfaces.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _FooInterfaceSERVER_IMPL_H_
#define _FooInterfaceSERVER_IMPL_H_

#include "utils/Messages.h"
#include "FooInterface.h"

/**
 * \brief This class is the skeleton of the servant and its remote procedures has to be implemented.
 */
class FooInterfaceServerImpl
{
    public:

        /// \brief The default constructor.
        FooInterfaceServerImpl(){}

        /// \brief The default destructor.
        virtual ~FooInterfaceServerImpl(){}

        virtual void FooProcedure() = 0;
;
};


#endif // _FooInterfaceSERVER_IMPL_H_