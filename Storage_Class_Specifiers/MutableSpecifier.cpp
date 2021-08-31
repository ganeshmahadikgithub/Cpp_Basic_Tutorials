#include "MutableSpecifier.h"

namespace SPECIFIER
{
	namespace MUTABLE
	{
		CMutableSpecifier::CMutableSpecifier()
			: m_customer_name("")
			, m_table_no(0)
			, m_placed_order("")
			, m_total_bill(0)
		{
		}

		CMutableSpecifier::CMutableSpecifier(const std::string& f_cust_name, const int f_table_no, const std::string& f_placed_order, const int f_total_bill)
			: m_customer_name(f_cust_name)
			, m_table_no(f_table_no)
			, m_placed_order(f_placed_order)
			, m_total_bill(f_total_bill)
		{
		}

		int CMutableSpecifier::GetModifyTotalBill(const int f_total_bill) const
		{
			m_total_bill = f_total_bill;
			return m_total_bill;
		}

		std::string CMutableSpecifier::GetModifyPlacedOrder(const std::string& f_placed_order) const
		{
			m_placed_order = f_placed_order;
			return m_placed_order;
		}
	}
}
