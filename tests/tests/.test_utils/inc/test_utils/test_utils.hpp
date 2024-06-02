/**
 ***********************************************************************************************************************
 * @file        test_utils.hpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
 ***********************************************************************************************************************
 */

#ifndef TEST_UTILS_HPP
#define TEST_UTILS_HPP

#include "priv/googletest.hpp"
#include <ostream>
#include <utility>

/**
 * @brief Tests namespace.
 *
 * Root namespace for all the tests and testing utilities and definitions.
 */
namespace Tests
{ }

/**
 * @brief Test utilities namespace.
 *
 * Testing utilities for the tests.
 */
namespace Tests::Utils
{

/**
 * @brief Class that logs interactions and functionality to an output stream.
 */
class Log
{
public:
    /**
     * @brief Log level within the class.
     */
    enum Level : size_t
    {
        LevelDisabled = 0,
        LevelEnabled
    };

    /**
     * @brief Construct a new object.
     * @param[in] out The output stream.
     * @param[in] level The logging level for the output stream.
     * @param[in] eol The end of line indicator.
     */
    Log(std::ostream & out, const Level level, const std::string & eol) :
        out(std::ref(out)), level(level), eol(eol), inst_num(inst_counter)
    {
        log("Value Constructor.");
        inst_counter++;
    }

    /**
     * @brief Default constructor.
     */
    Log() : Log(std::cout, Level::LevelEnabled, "\n") { log("Default Constructor."); }

    /**
     * @brief Copy constructor.
     * @param[in] obj Log object.
     */
    Log(const Log & obj) : out(obj.out), level(obj.level), eol(obj.eol), inst_num(inst_counter)
    {
        log("Copy Constructor.");
        inst_counter++;
    }

    /**
     * @brief Copy operator.
     * @param[in] obj Instance to copy into this class.
     * @return Instance of the class.
     */
    Log & operator=(const Log & obj)
    {
        // Protect against self-assignment.
        if (this != &obj)
        {
            log("Copy Operator.");
            out = obj.out;
            level = obj.level;
            eol = obj.eol;
            inst_num = inst_counter;
            inst_counter++;
        }

        return *this;
    }

    /**
     * @brief Move constructor.
     * @param[in] obj Log object.
     */
    Log(Log && obj) noexcept : out(obj.out), level(obj.level), eol(std::move(obj.eol)), inst_num(inst_counter)
    {
        log("Move Constructor.");
    }

    /**
     * @brief Move operator.
     * @param[in] obj Instance to move into this class.
     * @return Instance of the class.
     */
    Log & operator=(Log && obj) noexcept
    {
        // Protect against self-assignment.
        if (this != &obj)
        {
            log("Move Operator.");
            out = obj.out;
            level = obj.level;
            eol = std::move(obj.eol);
            inst_num = obj.inst_num;
        }

        return *this;
    }

    /**
     * @brief Destructor.
     */
    ~Log() { log("Destructor."); }

    /**
     * @brief Gets the instance number.
     * @return The instance number.
     */
    size_t num() const { return inst_num; }

    /**
     * @brief Resets the instance number.
     */
    static void num_reset() { inst_counter = 0U; }

    /**
     * @brief Output operator overload.
     */
    template<typename T>
    Log & operator<<(const T & item)
    {
        // Prior to logging, check if enabled.
        if (level == LevelEnabled)
        {
            out.get() << item;
        }
        // Return reference to self.
        return *this;
    }

    /**
     * @brief Prints a message.
     */
    template<typename... TArgs>
    Log & log(TArgs... FArgs)
    {
        // Print instance specifier.
        *this << "#" << inst_num << ": ";
        // Print the arguments.
        (*this << ... << FArgs);
        // Print end specifier.
        *this << eol;
        // Return reference to self.
        return *this;
    }

private:
    std::reference_wrapper<std::ostream> out; /**< Output stream to log to. */
    Level level; /**< Log level. */
    std::string eol; /**< End of line specifier. */
    size_t inst_num; /**< Instance number for the class. */
    static size_t inst_counter; /**< Instance counter. */
};

}

/**
 * @brief GoogleTest test utilities namespace.
 *
 * Utilities related to GoogleTest and GoogleMock for testing.
 */
namespace Tests::Utils::GoogleTest
{ }

#endif /* TEST_UTILS_HPP */

/******************************************************************************************************END OF FILE*****/
