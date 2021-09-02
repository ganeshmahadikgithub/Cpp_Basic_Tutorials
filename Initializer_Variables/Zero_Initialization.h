#pragma once

namespace INITIALIZER
{
	class CPoint;
	namespace ZERO_INITIALIZATION
	{
		struct data_struct
		{
			//data_struct()
			//	: m_struct_int_member(0)
			//	, m_struct_char_member{}    //defualt initialized with '\0'
			//{
			//}
		private:
			int m_struct_int_member;
			char m_struct_char_member;
		};

		class CZero_Initialization final
		{
		public:
			//explicit CZero_Initialization(const int f_int_data);
			~CZero_Initialization() = default;
			CZero_Initialization() = default;

		private:
			int m_int_data_member;
			float m_float_data_member;
			CPoint* m_cpoint_ptr;
			CPoint* m_cpoint_ptr1{nullptr};
		};
	}
}


