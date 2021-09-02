#pragma once

#include<iostream>

using namespace std;
namespace INITIALIZER
{
	namespace VALUE
	{
		class Value_Initialied final
		{
		public:
			Value_Initialied() = default;//zero initialized of members with default initialization
			~Value_Initialied() = default;

		private:
			int m_int_data_member;
			char m_char_data_member;
		};

	}
}