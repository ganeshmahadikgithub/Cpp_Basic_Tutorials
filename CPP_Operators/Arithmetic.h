#pragma once
#include<iostream>

namespace OPERATOR
{
	namespace ARITHMETIC
	{
		/// <summary>
		/// + , - , * , / , % Operators
		/// </summary>
		void PerformArithmeticOperations()
		{
			int l_operand_first{ 20 }, l_operand_second{ 10 };

			std::cout << "l_operand_first + l_operand_second :" << l_operand_first + l_operand_second << std::endl;  //Output : 30
			std::cout << "l_operand_first - l_operand_second :" << l_operand_first - l_operand_second << std::endl;  //Output : 10
			std::cout << "l_operand_first * l_operand_second :" << l_operand_first * l_operand_second << std::endl;  //Output : 200
			std::cout << "l_operand_first / l_operand_second :" << l_operand_first / l_operand_second << std::endl;  //Output : 2
			std::cout << "l_operand_first % l_operand_second :" << l_operand_first % l_operand_second << std::endl;  //Output : 0

			float l_float_operand_first{ 20.0f }, l_float_operand_second{ 3.0f };
			std::cout << "l_float_operand_first / l_float_operand_second :" << l_float_operand_first / l_float_operand_second << std::endl;  //Output : 6.66667
			//std::cout << "l_float_operand_first % l_float_operand_second :" << l_float_operand_first % l_float_operand_second << std::endl; //it will gives the error

			char l_char_operand_first{ 'n'}, l_char_operand_second{'C'};
			std::cout << "l_char_operand_first / l_char_operand_second :" << l_char_operand_first / l_char_operand_second << std::endl; //Output : 1
			std::cout << "l_char_operand_first % l_char_operand_second :" << l_char_operand_first % l_char_operand_second << std::endl; //Output : 0x43
		}
	}
}
