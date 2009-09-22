#ifndef _REMOTESERVICEREADER_H_
#define _REMOTESERVICEREADER_H_

#include "ndds/ndds_cpp.h"

DDS_SEQUENCE(RemoteServiceReaderDataSeq, char);
DDS_DATAREADER_CPP(RemoteServiceReader, RemoteServiceReaderDataSeq, char);

#endif // _REMOTESERVICEREADER_H_
