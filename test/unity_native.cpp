#include "unity.h"
#include "file_to_test.h"

namespace native
{
    namespace test
    {
        namespace unity
        {

            void setUp(void)
            {
                // Set up stuff here
            }

            void tearDown(void)
            {
                // Clean up stuff here
            }

            void test_addition(void)
            {
                TEST_ASSERT_EQUAL_INT(3, add(1, 2));
            }

            void test_subtraction(void)
            {
                TEST_ASSERT_EQUAL_INT(1, subtract(3, 2));
            }

            int main(void)
            {
                UNITY_BEGIN();
                RUN_TEST(test_addition);
                RUN_TEST(test_subtraction);
                return UNITY_END();
            }
        } // namespace unity
    }     // namespace test
} // namespace native
