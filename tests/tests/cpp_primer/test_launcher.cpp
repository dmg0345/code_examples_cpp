/**
 ***********************************************************************************************************************
 * @file        test_launcher.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#include "test_utils/test_utils.hpp"
#include "cpp_primer/cpp_primer.hpp"

// NOLINTBEGIN(cppcoreguidelines-owning-memory)

/**
 * @brief Namespace for the tests of 'CppPrimer'.
 */
namespace Tests::CppPrimer
{

/**
 * @brief Test suite, instantiated for every test.
 */
class CppPrimerTest : public testing::Test
{
protected:
    /**
     * @brief Setup function, called after the constructor in every test.
     */
    void SetUp() override { }

    /**
     * @brief Teardown function, called before the destructor in every test.
     */
    void TearDown() override { }
};

/**
 * @brief Launcher for the tests.
 */
TEST_F(CppPrimerTest, DISABLED_Launcher)
{
    ::CppPrimer::Chapter1::exercise_5();
}

}

// NOLINTEND(cppcoreguidelines-owning-memory)

/**
 * @brief Test runner for this suite of tests.
 * @return The result of the test runner.
 */
int main(int argc, char ** argv)
{
    // Initialize GoogleTest and GoogleMock.
    Tests::Utils::GoogleTest::init(argc, argv);

    // Execute the test runner.
    return RUN_ALL_TESTS();
}

/******************************************************************************************************END OF FILE*****/
