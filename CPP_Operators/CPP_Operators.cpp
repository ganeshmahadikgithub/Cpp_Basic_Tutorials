// CPP_Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Assignment.h"
#include "Arithmetic.h"

using namespace OPERATOR::ASSIGNMENT;
using namespace OPERATOR::ARITHMETIC;

int main()
{
    std::cout << "Operators!\n";
    /// <summary>
    /// Assignment Operator
    /// </summary>
    /// <returns></returns>

    AssignmentOperatorFun();/* = */ 
    COMPOUND::PerformCompoundAssOperation(); // *=,+=,>>=,<<=,-=,/=,&=,!=,^=, |=


    /// <summary>
    /// Arithmetic Operator
    /// </summary>
    /// <returns></returns>
    PerformArithmeticOperations();  //  +, - , * , / , %
}