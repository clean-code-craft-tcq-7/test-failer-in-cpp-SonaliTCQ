#include "alerter.hpp"

#define CEL_OKTHR 200
#define CEL_NOKTHR 500

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if (celcius <= CEL_OKTHR){
    return CEL_OKTHR;
    }
    else{ 
    return CEL_NOKTHR;
    }
}
