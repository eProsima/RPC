#include "client/Client.h"

static const char* const CLASS_NAME = "eProsima::DDSRPC::Client";

namespace eProsima
{
	namespace DDSRPC
	{

		Client::Client(int domainId, const char *qosLibrary,
								 const char *qosProfile) : m_domainId(domainId), m_participant(NULL)
		{
			const char* const METHOD_NAME = "Client";
			DDS::DomainParticipantQos participantQOS;

			// Creating the domain participant which is associated with the client
			if(qosLibrary == NULL || qosProfile == NULL)
			{
				m_participant = TheParticipantFactory->create_participant(
						m_domainId, DDS::PARTICIPANT_QOS_DEFAULT, 
						NULL /* listener */, DDS::STATUS_MASK_NONE);
			}
			else
			{
				m_participant = TheParticipantFactory->create_participant_with_profile(
					m_domainId, qosLibrary, qosProfile,
					NULL /* listener */, DDS::STATUS_MASK_NONE);
			}

			if (m_participant != NULL)
			{
				if(m_participant->get_qos(participantQOS) == DDS::RETCODE_OK)
				{
					participantQOS.entity_factory.autoenable_created_entities = DDS::BOOLEAN_FALSE;
					m_participant->set_qos(participantQOS);
				}
			}
			else
			{
				printf("ERROR<%s:%s>: create_participant error\n", CLASS_NAME, METHOD_NAME);
			}

			//printf("INFO <DDSCSClient>: Created client with ID {%u, %u, %u}\n", m_clientId[0],
			//	m_clientId[1], m_clientId[2]);
		}

		Client::~Client()
		{
			const char* const METHOD_NAME = "~Client";
			DDS::ReturnCode_t retcode;

			if(m_participant != NULL)
			{
				retcode = m_participant->delete_contained_entities();
				if (retcode != DDS::RETCODE_OK) {
					printf("ERROR<~%s:%s>: delete_contained_entities error %d\n", CLASS_NAME, METHOD_NAME, retcode);
				}

				retcode = TheParticipantFactory->delete_participant(m_participant);
				if (retcode != DDS::RETCODE_OK) {
					printf("ERROR<~%s:%s> delete_participant error %d\n", CLASS_NAME, METHOD_NAME, retcode);
				}
			}
		}


		DDS::DomainParticipant* Client::getParticipant()
		{ 
			return m_participant;
		}

	} // namespace DDSRPC
} // namespace eProsima
