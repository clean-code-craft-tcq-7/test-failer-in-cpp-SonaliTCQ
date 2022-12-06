#include <iostream>
#include <assert.h>
#include "alerter.hpp"
#include "alerter_stub.cpp"
#include "alerter_test.hpp"

#define CEL_OKTHR 200
#define CEL_NOKTHR 500

#define SWENV 0
    // if production then set to 1, if testing then set to 0

void alertInCelcius(float farenheit) {
    
    int alertFailureCount = 0;
    float celcius = (farenheit - 32) * 5 / 9;
    
        if(!SWENV){             //testing environment
            int returnCode = networkAlertStub(celcius);
            if (returnCode != CEL_OKTHR) {
                // non-ok response is not an error! Issues happen in life!
                // let us keep a count of failures to report
                // However, this code doesn't count failures!
                // Add a test below to catch this bug. Alter the stub above, if needed.
                alertFailureCount += 0;
                }
             alerttest(farenheit, alertFailureCount);
            }
}

int main() {
    alertInCelcius(392);
    alertInCelcius(400.5);
    alertInCelcius(303.6);
   
    std::cout << "All is well (maybe!)\n";
    return 0;
}
