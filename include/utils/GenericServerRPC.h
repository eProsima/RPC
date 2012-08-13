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
class  TName : public eProsima::DDSRPC::ServerRPC                                           \
{                                                                                 \
public:                                                                           \
  TName(const char *rpcName, eProsima::DDSRPC::Server* server,                              \
        const char *requestTypeName, const char *requestQosLibrary,               \
        const char *requestQosProfile, const char *replyTypeName,                 \
        const char *replyQosLibrary, const char *replyQosProfile,                 \
        eProsima::DDSRPC::fExecFunction execFunction, DDS::DomainParticipant *serverParticipant); \
  virtual ~TName();                                                               \
                                                                                  \
protected:                                                                        \
  virtual int sendReply(void* request, void *reply,                               \
     eProsima::DDSRPC::ReturnMessage errorMessage = eProsima::DDSRPC::OPERATION_SUCCESSFUL);          \
  virtual void deleteRequestData(void *request);                                  \
  virtual void on_data_available(DDS::DataReader* reader);                        \
                                                                                  \
private:                                                                          \
                                                                                  \
	TDataWriter *replyFooDataWriter;                                              \
	TDataReader *requestFooDataReader;                                            \
}

