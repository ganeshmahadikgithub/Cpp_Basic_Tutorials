// Storage_Class_Specifiers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Static_Specifiers.h"
using namespace SPECIFIER::STATIC;

int main()
{
    CStatic_Specifiers l_static;
    l_static.WriteMemberData();
    l_static.DisplayMemberData();
    CStatic_Specifiers::WriteMemberData();

    l_static.StaticLocalScopeData(10);//l_data = 10;
    l_static.StaticLocalScopeData(10);//l_data = 20;
    return 0;
}