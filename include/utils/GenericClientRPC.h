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
class  TName : public DDSRPC::ClientRPC                                                   \
{                                                                                 \
public:                                                                           \
  TName(const char *rpcName, const char *requestTypeName,                         \
        const char *requestQosLibrary, const char *requestQosProfile,             \
        const char *replyTypeName, const char *replyQosLibrary,                   \
        const char *replyQosProfile, DDS::DomainParticipant *clientParticipant);  \
  virtual ~TName();                                                               \
                                                                                  \
protected:                                                                        \
  virtual int registerInstance(void *data);                                       \
  virtual DDS::ReturnCode_t write(void *data);                                    \
  virtual DDSRPC::ReturnMessage takeReply(void *reply, DDS::QueryCondition *query);       \
                                                                                  \
private:                                                                          \
                                                                                  \
    static const char* const CLASS_NAME;                                          \
	TDataWriter *requestDataWriter;                                               \
	TDataReader *replyDataReader;                                                 \
}

