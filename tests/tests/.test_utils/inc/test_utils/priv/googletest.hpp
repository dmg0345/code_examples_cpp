/**
 ***********************************************************************************************************************
 * @file        googletest.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef TEST_UTILS_GOOGLETEST_HPP
#define TEST_UTILS_GOOGLETEST_HPP

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>

using namespace testing;

namespace Tests::Utils::GoogleTest
{

/**
 * @brief Minimal initialization for GoogleTest and GoogleMock, must be called within @c main before running tests.
 * @param[in] argc The number of command line arguments.
 * @param[in] argv The command line arguments.
 */
void init(int argc, char ** argv);

}

#endif /* TEST_UTILS_GOOGLETEST_HPP */

/******************************************************************************************************END OF FILE*****/
