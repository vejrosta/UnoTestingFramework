#include <Arduino.h>

namespace uno
{
  int add(int a, int b)
  {
    return a + b;
  }

  int subtract(int a, int b)
  {
    return a - b;
  }
} // namespace uno

void setup()
{
  // Initialize serial communication for debugging
  // Serial.begin(9600);
  // while (!Serial)
  // {
  //   ; // Wait for serial port to connect
  // }
  // Serial.println("Initialization complete.");
}

void loop()
{
  // Empty loop, not used in this example
}
