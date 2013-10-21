#ifndef _SIMPLEDELAYSERVER_IMPL_EXAMPLE_H_
#define _SIMPLEDELAYSERVER_IMPL_EXAMPLE_H_

#include "SimpleDelayServerImpl.h"

class SimpleDelayServerImplExample : public SimpleDelayServerImpl
{
    public:

        //! @brief The default constructor.
        SimpleDelayServerImplExample(){}

        //! @brief The default destructor.
        virtual ~SimpleDelayServerImplExample(){}

        DDS_Long suma(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2);

        Estructura duplicate(/*in*/ const Estructura& es);
};
#endif // _SIMPLEDELAYSERVER_IMPL_EXAMPLE_H_
