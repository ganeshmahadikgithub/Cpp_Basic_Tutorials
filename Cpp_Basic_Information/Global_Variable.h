#pragma once
#include <iostream>
using namespace std;

int m_memberVariable { 110 };//declared global variable

int GetData()
{
    m_memberVariable = 20;//modifield global variable
    return m_memberVariable;
}

int main()
{
    // Write C++ code here
    std::cout << GetData() << std::endl;
    return 0;
}