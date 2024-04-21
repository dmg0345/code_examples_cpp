/**
 ***********************************************************************************************************************
 * @file        exercise_57.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#include <string>

using namespace std;

#if defined(__GNUC__)
#pragma GCC diagnostic push // Store current settings.
#pragma GCC diagnostic ignored "-Wunused-function"
#endif

// NOLINTBEGIN(readability-make-member-function-const,performance-unnecessary-value-param)

namespace
{

class Account
{
public:
    Account(void) = default;

    Account(std::string oName, double initAm, double initInterestRate) : owner_name(oName), ammount(initAm)
    {
        setInterestRate(initInterestRate);
    }

    Account & calculate(void)
    {
        ammount += ammount * interestRate;
        return *this;
    }

    double getAmmount() { return ammount; }

    static void setInterestRate(double nr);

private:
    std::string owner_name;
    double ammount = 0;
    static double interestRate;
    static double getInterestRate(void);
};

double Account::interestRate = 0;

double Account::getInterestRate(void)
{
    return interestRate;
}

void Account::setInterestRate(double nr)
{
    interestRate = nr;
}

}

namespace CppPrimer::Chapter7
{

void exercise_57(void)
{
    // See above.
}

}

// NOLINTEND(readability-make-member-function-const,performance-unnecessary-value-param)

#if defined(__GNUC__)
#pragma GCC diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
