#include "List_Initializer.h"

namespace INITIALIZER
{
	namespace LIST
	{
		List_InitializeClass::List_InitializeClass(const int f_data1, const char f_data2)
			: m_data(f_data1)
			, m_char_data(f_data2)
		{
		}

		List_InitializeClass::List_InitializeClass()
			: m_data(0)
			, m_char_data{}
		{
		}

		List_InitializeClass List_InitializeConsumer::GetListBaseClass()
		{
			return List_InitializeClass{10,'1'};
		}

	}
}
