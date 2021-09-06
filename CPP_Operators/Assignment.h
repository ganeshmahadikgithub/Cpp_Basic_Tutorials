#pragma once
#include<iostream>

namespace OPERATOR
{
	namespace ASSIGNMENT
	{
		namespace SIMPLE
		{
			/// <summary>
			/// = Operator
			/// </summary>
			class CBaseClass
			{
			public:
				CBaseClass() = default;
				CBaseClass(const int f_int_data_member)
					: m_int_data_member{ f_int_data_member }
				{
				}

				~CBaseClass() = default;

				int GetIntData() const { return m_int_data_member; }

				void AssignmentOperator(const int f_int_data)
				{
					m_int_data_member = f_int_data;
					//operand1(lvalue)  = (operator)  operand2(rvalue)
					std::cout << "m_int_data_member:=" << m_int_data_member;
				}

			private:
				int m_int_data_member{ 0 };
			};

			class CDerived final :public CBaseClass
			{
			public:
				CDerived() = default;
				CDerived(const int f_int_data_member, const char f_char_data)
					: CBaseClass(f_int_data_member)
					, m_char_data_member{ f_char_data }
				{
				}

				~CDerived() = default;
				int GetCharData() const { return static_cast<int>(m_char_data_member); }

				//void operator = (const CDerived& f_rvale)
				//{
				//	
				//}
			private:
				char m_char_data_member{ 'a' };
			};
		}

		namespace COMPOUND
		{
			/// <summary>
			/// [ += , -= , /= , *= , %= , >>= , <<=  ,  |=  , &=  , ^=  ] Operators
			/// </summary>
			void PerformCompoundAssOperation()
			{
				int l_data = 20, l_data1 = 10;
				int l_bits = 2;

				l_data += l_data1;// l_data = 30
				std::cout << "l_data:"<<l_data << std::endl;

				l_data -= l_data1;// 30 -= 10 ,l_data = 20
				std::cout << "l_data:" << l_data << std::endl;

				l_data *= l_data1;// 20 * =10 ,l_data = 200
				std::cout << "l_data:" << l_data << std::endl;

				l_data1 = 20;

				l_data /= l_data1;// 200 /= 20 ,l_data = 10
				std::cout << "l_data:" << l_data << std::endl;

				l_data <<= l_bits;// 10 <<= 2 ,l_data =  40  left shift by 2 bits 
				std::cout << "l_data:" << l_data << std::endl;

				l_data >>= l_bits;// 40 >>= 2 ,l_data =  10   right shift by 2 bits
				std::cout << "l_data:" << l_data << std::endl;

				l_data |= l_bits;// 10 |= 2 ,l_data =  10   
				std::cout << "l_data:" << l_data << std::endl;

				l_data ^= l_bits;// 10 ^= 2 ,l_data = 8     
				std::cout << "l_data:" << l_data << std::endl;
			}
		}

		int AssignmentOperatorFun()
		{
			SIMPLE::CBaseClass l_base(24);
			SIMPLE::CDerived l_derived(24, 'B');
			l_base = l_derived;
			l_base.AssignmentOperator(l_derived.GetCharData());
			return 0;
		}
	}
}