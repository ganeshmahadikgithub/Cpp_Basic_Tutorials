#pragma once
#include<iostream>

using namespace std;
namespace INITIALIZER
{
	namespace COPY
	{
		class CCopy_Initialization final
		{
		public:
			CCopy_Initialization() = default;
			~CCopy_Initialization() = default;
			CCopy_Initialization(const CCopy_Initialization& f_object);
			CCopy_Initialization(const int f_int_data, const char f_char_data);

			CCopy_Initialization GetObject(const int f_int_data,const char f_char_data) /*const*/;
			int GetIntDataMember() const;
			void SetIntDataMember(const int f_data);

		private:
			int m_int_data_member;
			char m_char_data_member;
		};
	}
}