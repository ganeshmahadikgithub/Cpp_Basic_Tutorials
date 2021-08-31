#include "Static_Specifiers.h"

int SPECIFIER::STATIC::CStatic_Specifiers::m_static_member = 100;
//int SPECIFIER::STATIC::m_global_member = 100;//gives error for redefination so declared as extern
extern int SPECIFIER::STATIC::m_global_member = 100;

SPECIFIER::STATIC::CStatic_Specifiers::CStatic_Specifiers()
	: m_non_static_member(0)
{
}

//only static method can modified the static member
//other than static member it can't change any value
void SPECIFIER::STATIC::CStatic_Specifiers::WriteMemberData()
{
	m_static_member = 200;
	//m_non_static_member = 20;  gives the error it is specific to object
	SPECIFIER::STATIC::m_global_member = 40;
}

void SPECIFIER::STATIC::CStatic_Specifiers::DisplayMemberData()
{
	m_static_member     = 150;
	m_non_static_member = 20;

	std::cout << "m_static_member" << m_static_member << std::endl;
	std::cout << "m_non_static_member" << m_non_static_member << std::endl;

	SPECIFIER::STATIC::m_global_member = 20;
	std::cout << "m_global_member" << SPECIFIER::STATIC::m_global_member << std::endl;
}

void SPECIFIER::STATIC::CStatic_Specifiers::StaticLocalScopeData(const int f_param)
{
	static int l_data = 0;   //only one time it will initialized local variable and 
	                         //other it reuse the value of static member from ROM
	l_data += f_param;
	std::cout << "l_data:" << l_data << std::endl;
}
