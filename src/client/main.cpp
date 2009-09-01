#include "client/ClientTemplate.h"
#include "ndds_utility_cpp.h"
#include <time.h>

int main()
{
    int returnedValue = 0;
    DDS_Duration_t dur = {2, 0};
    /*time_t tiempo;
    struct tm *ttiempo;
    
    time(&tiempo);
    ttiempo = localtime(&tiempo);
    srand(ttiempo->tm_sec);*/
    
    ClientTemplate *client = new ClientTemplate();
    NDDSUtility::sleep(dur);


    client->function1Template(300, 5555, returnedValue);
    printf("RET %ld\n", returnedValue);
    client->function1Template(310, 1555, returnedValue);
    printf("RET %ld\n", returnedValue);
    client->function1Template(302, 2555, returnedValue);
    printf("RET %ld\n", returnedValue);
    client->function1Template(303, 5535, returnedValue);
    printf("RET %ld\n", returnedValue);

    delete client;

    return returnedValue;
}
