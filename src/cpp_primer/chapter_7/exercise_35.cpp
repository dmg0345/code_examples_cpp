/**
 ***********************************************************************************************************************
 * @file        exercise_35.cpp
 * @author      Diego Martínez García (dmg0345@gmail.com)
 * @date        02-06-2024 00:31:19 (UTC)
 * @version     1.0.1
 * @copyright   github.com/dmg0345/bde/blob/master/LICENSE
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
