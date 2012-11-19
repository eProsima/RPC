/* $Id$   *
 * (c) Copyright, eProsima, 2009.                                          *
 * All rights reserved.                                                    *    
 *                                                                         *
 * No duplications, whole or partial, manual or electronic, may be made    *
 * without express written permission.  Any such copies, or                *
 * revisions thereof, must display this notice unaltered.                  *
 * This code contains trade secrets of                                     *
 * eProsima (Proyectos y Sistemas de Mantenimiento S.L.)                   *
 *                                                                         *
 * modification history                                                    *
 * --------------------                                                    *
 * 1.0,27ene10,RodM Created                                                *
 * =====================================================================   *
 */

#include "server/ServerRPC.h"

#define GENERIC_SERVER_RPC(TName, TDataWriter, TDataReader)                       \
                                                                                  \
class  TName : public eProsima::RPCDDS::ServerRPC                                           \
{                                                                                 \
public:                                                                           \
  TName(const char *rpcName, eProsima::RPCDDS::Server* server,                              \
        const char *requestTypeName, const char *replyTypeName,                 \
        eProsima::RPCDDS::fExecFunction execFunction);                            \
  virtual ~TName();                                                               \
                                                                                  \
protected:                                                                        \
  virtual int sendReply(void* request, void *reply);                              \
  virtual void deleteRequestData(void *request);                                  \
  virtual void on_data_available(DDS::DataReader* reader);                        \
}

#define GENERIC_SERVER_ONEWAY_RPC(TName, TDataReader)                       \
                                                                                  \
class  TName : public eProsima::RPCDDS::ServerRPC                                           \
{                                                                                 \
public:                                                                           \
  TName(const char *rpcName, eProsima::RPCDDS::Server* server,                              \
        const char *requestTypeName,                                              \
        eProsima::RPCDDS::fExecFunction execFunction);                            \
  virtual ~TName();                                                               \
                                                                                  \
protected:                                                                        \
  virtual int sendReply(void* request, void *reply);                              \
  virtual void deleteRequestData(void *request);                                  \
  virtual void on_data_available(DDS::DataReader* reader);                        \
                                                                                  \
private:                                                                          \
                                                                                  \
	TDataReader *requestFooDataReader;                                            \
}

