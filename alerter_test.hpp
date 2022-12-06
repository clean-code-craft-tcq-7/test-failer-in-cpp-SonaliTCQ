#include <assert.h>
#include "alerter.hpp"

#define FAHRTHR 392

void alerttest(float farenheit, int alertFailureCount)
{
  if (farenheit > FAHRTHR)
  {
  assert(alertFailureCount == 1);
  std::cout << alertFailureCount << " failed alerts \n";
  } 
  else {
  assert(alertFailureCount == 0);
  std::cout << alertFailureCount << " NO alerts \n";
  }
}
