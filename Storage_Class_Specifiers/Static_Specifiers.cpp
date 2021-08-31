#include "Static_Specifiers.h"

int CStatic_Specifiers::m_static_member = 100;
extern int m_global_member = 100;

CStatic_Specifiers::CStatic_Specifiers()
	: m_non_static_member(0)
{
}

//only static method can modified the static member
//other than static member it can't change any value
void CStatic_Specifiers::WriteMemberData()
{
	m_static_member = 200;
	//m_non_static_member = 20;  gives the error it is specific to object
	::m_global_member = 40;
}

void CStatic_Specifiers::DisplayMemberData()
{
	m_static_member     = 150;
	m_non_static_member = 20;

	std::cout << "m_static_member" << m_static_member << std::endl;
	std::cout << "m_non_static_member" << m_non_static_member << std::endl;

	::m_global_member = 20;
	std::cout << "m_global_member" << ::m_global_member << std::endl;
}
