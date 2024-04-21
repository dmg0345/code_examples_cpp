/**
 ***********************************************************************************************************************
 * @file        test_launcher.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "googletest_defs.hpp"
#include "cpp_primer/cpp_primer.hpp"

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/*--------------------------------------------------------------------------------------------------------------------*/
TEST(DISABLED_CppPrimer, Launcher)
{
    CppPrimer::Chapter1::exercise_5();
}

// NOLINTEND(cppcoreguidelines-owning-memory)

/**
 * @brief Test runner for this suite of tests.
 * @return The result of the test runner.
 */
int main(int argc, char ** argv)
{
    // Initialize GoogleTest and GoogleMock.
    GoogleTestDefs::init(argc, argv);

    // Execute the test runner.
    return RUN_ALL_TESTS();
}

/******************************************************************************************************END OF FILE*****/
