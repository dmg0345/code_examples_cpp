/**
 ***********************************************************************************************************************
 * @file        exercise_40.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

#if defined(__clang__)
#pragma clang diagnostic push // Store current settings.
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

// NOLINTBEGIN(cppcoreguidelines-prefer-member-initializer,readability-make-member-function-const)

namespace
{

class Vehicle
{
public:
    using vehicleType = enum
    {
        car = 0,
        bike,
        truck,
        bus
    };

    using tiresSize = enum
    {
        two = 0,
        four = 1,
        eight = 2
    };

    Vehicle(const vehicleType vht, const tiresSize trs) :
        vehicle(vht), tiresCount(trs), acceleration(5), decceleration(10)
    {
        currentSpeed = 0;
    }

    Vehicle(const vehicleType vht, const tiresSize trs, const unsigned int accel, const unsigned int deccel) :
        vehicle(vht), tiresCount(trs), acceleration(accel), decceleration(deccel)
    {
        currentSpeed = 0;
    }

    inline Vehicle & accelerate(void)
    {
        currentSpeed = currentSpeed + acceleration;
        return *this;
    }

    inline Vehicle & deccelrate(void)
    {
        currentSpeed = currentSpeed - decceleration;
        return *this;
    }

    inline unsigned int getSpeed(void) { return currentSpeed; }

private:
    const vehicleType vehicle;
    const tiresSize tiresCount;
    unsigned int currentSpeed;
    const unsigned int acceleration;
    const unsigned int decceleration;
};

}

namespace CppPrimer::Chapter7
{

void exercise_40(void)
{
    // The class above is a simple example.
}

}

// NOLINTEND(cppcoreguidelines-prefer-member-initializer,readability-make-member-function-const)

#if defined(__clang__)
#pragma clang diagnostic pop // Restore settings.
#endif

/******************************************************************************************************END OF FILE*****/
