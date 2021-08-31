#include "RegisterClassSpecifier.h"

SPECIFIER::REGISTER::CRegisterClassSpecifier::CRegisterClassSpecifier()
{
}

int SPECIFIER::REGISTER::CRegisterClassSpecifier::CalculatePower(register int f_number, register int f_power) const
{
	register int l_temp = 1;
	for (; f_number;--f_number)
	{
		l_temp = l_temp * f_power;
	}

	return l_temp;
}

char* SPECIFIER::REGISTER::CRegisterClassSpecifier::AppendText(register char* f_text, register char f_char) const
{
	if (!f_text)
	{
		return nullptr;
	}

	register char* l_temp = f_text;
	*l_temp = *l_temp + f_char;
	return l_temp;
}
