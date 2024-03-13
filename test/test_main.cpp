#define DOCTEST_CONFIG_IMPLEMENT // REQUIRED: Enable custom main()
#include <doctest.h>

TEST_CASE("Simple addition test")
{
    int result = 1 + 1;
    CHECK(result == 2);
}

int main(int argc, char **argv)
{
    doctest::Context context;

    // BEGIN:: PLATFORMIO REQUIRED OPTIONS
    context.setOption("success", true);     // Report successful tests
    context.setOption("no-exitcode", true); // Do not return non-zero code on failed test case
    // END:: PLATFORMIO REQUIRED OPTIONS

    // YOUR CUSTOM DOCTEST OPTIONS

    context.applyCommandLine(argc, argv);
    return context.run();
}
