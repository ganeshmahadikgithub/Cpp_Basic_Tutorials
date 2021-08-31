#pragma once
#include <iostream>
using namespace std;

int GetData()
{
    int l_member = 20;//local member
    return l_member;
}

int main()
{
    // Write C++ code here
    std::cout << "local data:"<<GetData() << std::endl;
    int l_member = 40;
    std::cout << "local data:" << l_member << std::endl;

    return 0;
}