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
  TName(const char *remoteServiceName, long clientId, const char *requestTypeName,\
        const char *replyTypeName, DDSDomainParticipant *clientParticipant);      \
  virtual ~TName();                                                               \
                                                                                  \
protected:                                                                        \
  virtual DDS_ReturnCode_t write(void *data);                                     \
  virtual DDSCSMessages handleNewInstance(ThreadLocalInfo *info,                  \
    DDSConditionSeq& conditionSeq);                                               \
  virtual DDSCSMessages handleNewSample(ThreadLocalInfo *info, void *request,     \
    DDSConditionSeq& conditionSeq);                                               \
                                                                                  \
private:                                                                          \
                                                                                  \
	TDataWriter *requestDataWriter;                                               \
	TDataReader *replyDataReader;                                                 \
}

