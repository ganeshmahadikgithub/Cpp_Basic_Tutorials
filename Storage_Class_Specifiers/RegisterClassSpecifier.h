#pragma once

namespace SPECIFIER
{
	namespace REGISTER
	{
		//static register int m_register_member;//it can't be global or static register variable;

		class CRegisterClassSpecifier final
		{
		public:
			CRegisterClassSpecifier();
			~CRegisterClassSpecifier() = default;

			int CalculatePower(register int f_number, register int f_power) const;
			char* AppendText(register char* f_text, register char f_char) const;
			//only int , char and pointer will support for regster

		private:
			//register int m_register_member{ 0 };   //no longer supported into c++17
		};
	}
}
