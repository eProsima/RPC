#include "client/DDSCSClient.h"

DDSCSClient::DDSCSClient(int domainId, const char *qosLibrary,
                         const char *qosProfile) : m_domainId(domainId), m_participant(NULL)
{
    DDS_DomainParticipantQos participantQOS;

    // Creating the domain participant which is associated with the client
    if(qosLibrary == NULL || qosProfile == NULL)
    {
        m_participant = DDSTheParticipantFactory->create_participant(
                m_domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
                NULL /* listener */, DDS_STATUS_MASK_NONE);
    }
    else
    {
        m_participant = DDSTheParticipantFactory->create_participant_with_profile(
            m_domainId, qosLibrary, qosProfile,
            NULL /* listener */, DDS_STATUS_MASK_NONE);
    }

    if (m_participant != NULL)
    {
        if(m_participant->get_qos(participantQOS) == DDS_RETCODE_OK)
        {
            participantQOS.entity_factory.autoenable_created_entities = DDS_BOOLEAN_FALSE;
            m_participant->set_qos(participantQOS);
        }
    }
    else
    {
        printf("ERROR <DDSCSClient>: create_participant error\n");
    }

	//printf("INFO <DDSCSClient>: Created client with ID {%u, %u, %u}\n", m_clientId[0],
	//	m_clientId[1], m_clientId[2]);
}

DDSCSClient::~DDSCSClient()
{
    DDS_ReturnCode_t retcode;

    if(m_participant != NULL)
    {
        retcode = m_participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            printf("ERROR <~DDSCSClient>: delete_contained_entities error %d\n", retcode);
        }

        retcode = DDSTheParticipantFactory->delete_participant(m_participant);
        if (retcode != DDS_RETCODE_OK) {
            printf("ERROR <~DDSCSClient> delete_participant error %d\n", retcode);
        }
    }
}


DDSDomainParticipant* DDSCSClient::getParticipant()
{ 
    return m_participant;
}
