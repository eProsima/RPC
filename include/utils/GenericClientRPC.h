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
