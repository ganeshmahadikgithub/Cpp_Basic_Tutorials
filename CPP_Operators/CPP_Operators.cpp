// CPP_Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Assignment.h"
using namespace OPERATOR::ASSIGNMENT;

int main()
{
    std::cout << "Hello World!\n";
    AssignmentOperatorFun();/* = */ 
    COMPOUND::PerformCompoundAssOperation(); // *=,+=,>>=,<<=,-=,/=,&=,!=,^=, |=
}