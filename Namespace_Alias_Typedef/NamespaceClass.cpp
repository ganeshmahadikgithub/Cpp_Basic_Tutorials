#include "NamespaceClass.h"

//Unnamed namespace globle(external linkage) and static(internal linkage) 
//
int m_global_static_member = { 0 };

//alias declared or using namespace in using directive we can direct write defination
namespace NAMEDSPACE = STUDY::NAMESPACE;

//named namespace define static member
int NAMEDSPACE::CNamespaceClass::m_global_static_member { 12 };
//using namespace STUDY::NAMESPACE;//import entire namespace into this file

//-------------------------------------------------------------------------------------------------
CAnanoumousClass::CAnanoumousClass(const char f_data)
	: m_char_member{f_data}
{
	//ananoumous unnamed namepace
}
//-------------------------------------------------------------------------------------------------


NAMEDSPACE::CNamespaceClass::CNamespaceClass(const char f_data)
	: m_char_member{ f_data }
	, m_int_data_member{0}
{
	//named namespace
}

STUDY::NAMESPACE::CNamespaceClass::CNamespaceClass(const char f_data, const int f_int_data)
	: m_char_member{ f_data }
	, m_int_data_member{ f_int_data }
{
}
//-------------------------------------------------------------------------------------------------
