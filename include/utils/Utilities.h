#ifndef _UTILS_UTILITIES_H_
#define _UTILS_UTILITIES_H_

#include "utils/Version.h"

void get_guid(unsigned int *id, DDS::DataWriter *datawriter, DDS::DataWriterQos &wQos);

void set_redundant_feature(DDS::DataReader *datareader, DDS::DataReaderQos &rQos);

#endif // _UTILS_UTILITIES_H_
