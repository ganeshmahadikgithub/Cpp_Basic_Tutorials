#pragma once
#include<string>
#include<iostream>

using namespace std;

namespace SPECIFIER
{
	namespace MUTABLE
	{
		class CMutableSpecifier final
		{
		public:
			CMutableSpecifier();
			CMutableSpecifier(const std::string& f_cust_name,const int f_table_no,const std::string& f_placed_order, const int f_total_bill);
			~CMutableSpecifier() = default;

			std::string GetModifyPlacedOrder(const std::string& f_placed_order) const;
			int GetModifyTotalBill(const int f_total_bill) const;
			
		private:
			std::string m_customer_name;
			int m_table_no;
			mutable std::string m_placed_order;
			mutable int m_total_bill;
		};
	}
}
