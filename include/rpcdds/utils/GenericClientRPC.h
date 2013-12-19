/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "client/ClientRPC.h"

#define GENERIC_CLIENT_RPC(TName, TDataWriter, TDataReader)                       \
                                                                                  \
class  TName : public eProsima::RPCDDS::ClientRPC                                                   \
{                                                                                 \
public:                                                                           \
  TName(const char *rpcName, const char *requestTypeName,                         \
        const char *replyTypeName, eProsima::RPCDDS::Client *client);           \
  virtual ~TName();                                                               \
  virtual eProsima::RPCDDS::ReturnMessage takeReply(void *reply, DDS::QueryCondition *query);       \
                                                                                  \
protected:                                                                        \
  virtual DDS::ReturnCode_t write(void *data);                                    \
                                                                                  \
private:                                                                          \
                                                                                  \
    static const char* const CLASS_NAME;                                          \
	TDataWriter *requestDataWriter;                                               \
	TDataReader *replyDataReader;                                                 \
}

#define GENERIC_CLIENT_ONEWAY_RPC(TName, TDataWriter)                       \
                                                                                  \
class  TName : public eProsima::RPCDDS::ClientRPC                                                   \
{                                                                                 \
public:                                                                           \
  TName(const char *rpcName, const char *requestTypeName,                         \
        eProsima::RPCDDS::Client *client);           \
  virtual ~TName();                                                               \
  virtual eProsima::RPCDDS::ReturnMessage takeReply(void *reply, DDS::QueryCondition *query);       \
                                                                                  \
protected:                                                                        \
  virtual DDS::ReturnCode_t write(void *data);                                    \
                                                                                  \
private:                                                                          \
                                                                                  \
    static const char* const CLASS_NAME;                                          \
	TDataWriter *requestDataWriter;                                               \
}
