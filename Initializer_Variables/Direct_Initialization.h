#pragma once
#include<iostream>

using namespace std;
namespace INITIALIZER
{
	namespace DIRECT
	{
		class CBaseClass
		{
		public:
			CBaseClass() = default;
			~CBaseClass() = default;
			CBaseClass(const int f_int_data);

		private:
			int m_int_data_member;
		};

		class CDerivedClass final : public CBaseClass
		{
		public:
			CDerivedClass() = default;
			~CDerivedClass() = default;
			CDerivedClass(const int f_int_data_member,const char f_char_data);

		private:
			char m_char_data_member;
		};
	}
}