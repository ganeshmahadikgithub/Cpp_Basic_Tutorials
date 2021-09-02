#pragma once
#include <iostream>

namespace DATA_TYPES
{
	namespace USER_DEFINED
	{
		class ClassName final
		{
		public:
			ClassName() = default;
			ClassName(const int f_int_data, const char f_char_data, const float f_float_data);
			~ClassName() = default;

			int GetIntData() const;     //Derived data types
			char GetCharData() const;
			char& GetCharPtrData();//Derived data types
			void SetIntData(const int f_int_data);

		private:
			//fundamental data members
			int m_int_data_member;
			float m_float_data_member;
			char m_char_data_member;
		};
	}
}