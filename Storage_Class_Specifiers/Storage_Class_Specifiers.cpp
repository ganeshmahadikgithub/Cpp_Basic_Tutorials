// Storage_Class_Specifiers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Static_Specifiers.h"
#include "RegisterClassSpecifier.h"
#include "AutoExamples.h"
#include "MutableSpecifier.h"


using namespace SPECIFIER::STATIC;
using namespace SPECIFIER::REGISTER;
using namespace SPECIFIER::AUTO;
using namespace SPECIFIER::MUTABLE;

int main()
{
    CStatic_Specifiers l_static;
    CRegisterClassSpecifier l_register;
    CAutoExamples l_auto_example;

    l_static.WriteMemberData();
    l_static.DisplayMemberData();
    CStatic_Specifiers::WriteMemberData();

    l_static.StaticLocalScopeData(10);//l_data = 10;
    l_static.StaticLocalScopeData(10);//l_data = 20;
    std::cout <<l_register.CalculatePower(10, 12);
    char l_data[] = "Abc";
    std::cout<<l_register.AppendText(l_data,'b') <<std::endl;

    l_auto_example.DefineAutoVariable();
    l_auto_example.DefineConstAutoVAriable();
    auto l_return = l_auto_example.ExpressionAutoVariable();
    std::cout << "l_return:"<<l_return << std::endl;

   l_auto_example.InitializerListAutoVariable();

   std::string l_customer_name = { "ABC" };
   std::string l_placed_order = { "PQM"};
   const CMutableSpecifier l_mutable_specifier(l_customer_name,100, l_placed_order,100);

   std::cout<<"PLACED_ORDER:"<<l_mutable_specifier.GetModifyPlacedOrder("XYZ") <<std::endl;
   std::cout<<"TOTAL_BILL:"  <<l_mutable_specifier.GetModifyTotalBill(200)     << std::endl;
    return 0;
}