#pragma once
#include<iostream>
#include<string>

/// <summary>
/// using namespace declaration only import required part from namespace
/// </summary>


namespace USING_DECLARATION_A
{
	void DisplayData(std::string& l_data)
	{
		std::cout << "Display USING_DECLARATION_A" << l_data<<std::endl;
	}

	int GetData()
	{
		int l_data{ 0 };
		std::cout << "Enter the digit USING_DECLARATION_A:\n" << l_data << std::endl;
		std::cin >> l_data;
		return l_data;
	}
}

namespace USING_DECLARATION_B
{
	void DisplayData(std::string& l_data)
	{
		std::cout << "Display USING_DECLARATION_B" << l_data << std::endl;
	}

	int GetData()
	{
		int l_data{ 0 };
		std::cout << "Enter the digit USING_DECLARATION_B:\n" << l_data << std::endl;
		std::cin >> l_data;
		return l_data;
	}
}

class CUsingDeclaration final
{
public:
	CUsingDeclaration() = default;
	~CUsingDeclaration() = default;

	int GetDataFromConsole();
	void WriteDataFromConsole(std::string& f_data);

private:
	char m_char_data;
};