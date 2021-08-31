#pragma once
#include<iostream>
namespace VARIABLE_COMMENTS
{
	class CVariable final
	{
	public:
		CVariable();
		~CVariable() = default;

		void ShowData() const;
		void SetData(const int f_number1, const int f_number2, const int f_number3);

	private:
		int m_number1{ 0 }; //initializer list
		int m_number2;
		int m_number3;
	};
}
