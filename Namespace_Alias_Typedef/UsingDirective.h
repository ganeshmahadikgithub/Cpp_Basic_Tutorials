#pragma once

/// <summary>
/// using namespace directives import emtire namespace into global space
/// </summary>
namespace UsingNamespaceDirective
{
	int m_int_data;
	class CUsingDirective final
	{
	public:
		CUsingDirective() = default;
		~CUsingDirective() = default;

	private:
		char m_char_data;
	};
}
