/**
 ***********************************************************************************************************************
 * @file        googletest_defs.hpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#ifndef GOOGLETEST_DEFS_HPP
#define GOOGLETEST_DEFS_HPP

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>

using namespace testing;

/**
 * @brief Utilities related to GoogleTest and GoogleMock for testing.
 */
namespace GoogleTestDefs
{

/**
 * @brief Minimal initialization for GoogleTest and GoogleMock, must be called within @c main before running tests.
 * @param[in] argc The number of command line arguments.
 * @param[in] argv The command line arguments.
 */
void init(int argc, char ** argv);

}

#endif /* GOOGLETEST_DEFS_HPP */

/******************************************************************************************************END OF FILE*****/
