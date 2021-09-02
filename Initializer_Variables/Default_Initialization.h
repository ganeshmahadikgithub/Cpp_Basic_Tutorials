#pragma once
#include<iostream>

using namespace std;
namespace INITIALIZER
{
	namespace DEFAULT
	{
		class Default_Initialization final
		{
		public:
			Default_Initialization() = default;//DEFAULT INITIALIZATION WILL CALL
			~Default_Initialization() = default;

		private:
			int m_data_member;
			char m_char_data_member;
		};


	}
}
