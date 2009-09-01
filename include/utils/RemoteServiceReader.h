#ifndef _REMOTESERVICEREADER_H_
#define _REMOTESERVICEREADER_H_

#include "dds_cpp/dds_cpp_data.h"

DDS_SEQUENCE(RemoteServiceReaderDataSeq, char);
DDS_DATAREADER_CPP(RemoteServiceReader, RemoteServiceReaderDataSeq, char);

#endif // _REMOTESERVICEREADER_H_
