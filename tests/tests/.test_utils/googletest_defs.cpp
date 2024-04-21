/**
 ***********************************************************************************************************************
 * @file        googletest_defs.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include "googletest_defs.hpp"

namespace GoogleTestDefs
{

/*--------------------------------------------------------------------------------------------------------------------*/
void init(int argc, char ** argv)
{
#if defined(GOOGLETEST_JUNIT_XML_OUTPUT)
    ::testing::GTEST_FLAG(output) = "xml:" GOOGLETEST_JUNIT_XML_OUTPUT;
#endif
    // Initialize GoogleTest.
    InitGoogleTest(&argc, argv);
    // Initialize GoogleMock.
    InitGoogleMock(&argc, argv);
}

}

/******************************************************************************************************END OF FILE*****/
