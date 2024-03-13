#include <Arduino.h>
#include <unity.h>
#include "main.cpp" // Include the main file to test its functions

namespace uno
{
    namespace test
    {
        namespace unity
        {

            void test_addition()
            {
                TEST_ASSERT_EQUAL_INT(3, add(1, 2));
            }

            void test_subtraction()
            {
                TEST_ASSERT_EQUAL_INT(1, subtract(3, 2));
            }

            int main()
            {
                delay(2000);   // Delay to allow serial connection to be established
                UNITY_BEGIN(); // Begin Unity testing framework
                RUN_TEST(test_addition);
                RUN_TEST(test_subtraction);
                UNITY_END(); // End Unity testing framework
                return 0;
            }

        } // namespace unity
    }     // namespace test
} // namespace uno
