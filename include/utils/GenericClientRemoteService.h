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

#include "client/ClientRemoteService.h"

#define GENERIC_CLIENT_REMOTE_SERVICE(TName, TDataWriter, TDataReader)            \
                                                                                  \
class  TName : public ClientRemoteService                                         \
{                                                                                 \
public:                                                                           \
  TName(const char *remoteServiceName, const char *requestTypeName,               \
        const char *replyTypeName, DDSDomainParticipant *clientParticipant);      \
  virtual ~TName();                                                               \
                                                                                  \
protected:                                                                        \
  virtual int registerInstance(void *data);                                       \
  virtual DDS_ReturnCode_t write(void *data);                                     \
  virtual DDSCSMessages takeReply(void *reply, DDSQueryCondition *query);         \
                                                                                  \
private:                                                                          \
                                                                                  \
    static const char* const CLASS_NAME;                                          \
	TDataWriter *requestDataWriter;                                               \
	TDataReader *replyDataReader;                                                 \
}

