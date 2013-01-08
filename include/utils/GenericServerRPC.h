/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

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

