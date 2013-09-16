/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_SERVERTRANSPORT_H_
#define _TRANSPORTS_SERVERTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/Transport.h"

namespace eprosima {
    namespace rpcdds {
        namespace transport {
            /*!
             * @brief This interface is the base of all classes that implement a transport
             *        that could be used by a server.
             * @ingroup TRANSPORTMODULE
             */
            class RPCDDS_DllAPI ServerTransport : public Transport
            {
                public:

                    //! \brief Default constructor.
                    ServerTransport() {}

                    //! \brief Default destructor.
                    virtual ~ServerTransport() {}

                    /*!
                     * @brief This function returns the type of the transport.
                     *        This function has to be implemented by the child classes.
                     */
                    virtual const char* getType() const = 0;

                    virtual void run() = 0;
                    virtual void stop() = 0;
            };
        }
        // namespace transport
    }// namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_SERVERTRANSPORT_H_
