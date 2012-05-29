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

#include "server/ServerRemoteService.h"

#define GENERIC_SERVER_REMOTE_SERVICE(TName, TDataWriter, TDataReader)            \
                                                                                  \
class  TName : public ServerRemoteService                                         \
{                                                                                 \
public:                                                                           \
  TName(const char *remoteServiceName, DDSCSServer* server,                       \
        const char *requestTypeName, const char *requestQosLibrary,               \
        const char *requestQosProfile, const char *replyTypeName,                 \
        const char *replyQosLibrary, const char *replyQosProfile,                \
        fExecFunction execFunction, DDSDomainParticipant *serverParticipant);     \
  virtual ~TName();                                                               \
                                                                                  \
protected:                                                                        \
  virtual int sendReply(void* request, void *reply,                               \
     DDSCSMessages errorMessage = OPERATION_SUCCESSFUL);                          \
  virtual void on_data_available(DDSDataReader* reader);                          \
                                                                                  \
private:                                                                          \
                                                                                  \
	TDataWriter *replyFooDataWriter;                                              \
	TDataReader *requestFooDataReader;                                            \
}

