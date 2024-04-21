// clang-format off
// NOLINTBEGIN

#include "cpp_primer/third_party/Screen.hpp"

Screen& Screen::display(std::ostream &out)
{
    for (const auto &i : this->screenData)
    {
        for (const auto &a : i)
        {
            out << a;
        }
        out << std::endl;
    }

    return *this;
}

// NOLINTEND
