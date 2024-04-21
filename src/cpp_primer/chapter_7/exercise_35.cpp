/**
 ***********************************************************************************************************************
 * @file        exercise_35.cpp
 * @author      ${PROJECT_AUTHOR} (${PROJECT_CONTACT})
 * @date        ${PROJECT_BUILD_TIMESTAMP_UTC}
 * @version     ${PROJECT_VERSION}
 * @copyright   ${PROJECT_COPYRIGHT}
 ***********************************************************************************************************************
 */

namespace CppPrimer::Chapter7
{

void exercise_35(void)
{
    // Type initVal(): string type.
    // Type setVal(Type): double type.
    // Type initVal(): double type.
    // Type Exercise::setVal(Type parm): return type is string, parameter type is double.
    // val = parm + initVal(): Member function, data member.

    // This is the fixed version:
    //    class Exercise
    //    {
    //        public:
    //            typedef double Type;
    //            Type setVal(Type);
    //            // This needs to be defined...
    //            Type initVal();
    //        private:
    //            Type val;
    //    };
    //
    //    Exercise::Type Exercise::setVal(Type parm)
    //    {
    //        val = parm + initVal();
    //        return val;
    //    }
}

}

/******************************************************************************************************END OF FILE*****/
