#ifndef _UTILS_UTILITIES_H_
#define _UTILS_UTILITIES_H_

#include "utils/Version.h"

namespace eProsima
{
    namespace DDSRPC
    {
        void get_guid(unsigned int *id, DDS::DataWriter *datawriter);

        void set_redundant_feature(DDS::DataReader *datareader, DDS::DataReaderQos &rQos);

        DDS::DomainParticipantFactory* getFactory(int domainId);
    }; // namespace DDSR
}; // namespace eProsima

#endif // _UTILS_UTILITIES_H_
