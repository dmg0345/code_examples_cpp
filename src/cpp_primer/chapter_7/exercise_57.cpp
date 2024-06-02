/**
 ***********************************************************************************************************************
 * @file        exercise_57.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
