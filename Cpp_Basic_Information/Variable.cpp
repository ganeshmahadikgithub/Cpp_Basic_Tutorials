#include "Variable.h"

VARIABLE_COMMENTS::CVariable::CVariable()
	: m_number2(22)
	, m_number3(20)//initialization_list
{
	//  single line comment
	/* multi line comments*/
}

void VARIABLE_COMMENTS::CVariable::ShowData() const
{
	std::cout << "Member1:" << m_number1 << std::endl;
	std::cout << "Member2:" << m_number2 << std::endl;
	std::cout << "Member3:" << m_number3 << std::endl;
}

void VARIABLE_COMMENTS::CVariable::SetData(const int f_number1,const int f_number2,const int f_number3)
{
	m_number1 = f_number1;
	m_number2 = f_number2;
	m_number3 = f_number3;
}
