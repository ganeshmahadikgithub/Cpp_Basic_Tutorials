// Storage_Class_Specifiers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Static_Specifiers.h"

int main()
{
    CStatic_Specifiers l_static;
    l_static.WriteMemberData();
    l_static.DisplayMemberData();
    CStatic_Specifiers::WriteMemberData();

    return 0;
}