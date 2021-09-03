#pragma once
#include<iostream>

namespace STUDY
{
	namespace NAMESPACE
	{
		//...... declaration of nested namespaces
	}
}

/// <summary>
/// Unnamed namespaces with no name and scop will be within class file
/// </summary>
namespace
{
	int m_gloable_int_member{ 110 };
	static int m_global_static_member;

	class CAnanoumousClass final
	{
	public:
		explicit CAnanoumousClass(const char f_char_data);
		~CAnanoumousClass() = default;

	private:
		char m_char_member;
	};
}

/// <summary>
/// namespaces nested
/// </summary>
/// 
namespace STUDY
{
	namespace NAMESPACE
	{
		int m_gloable_int_member{ 110 };

		class CNamespaceClass final
		{
		public:
			explicit CNamespaceClass(const char f_data);
			CNamespaceClass(const char f_data,const int f_int_data);
			~CNamespaceClass() = default;

		private:
			char m_char_member;
			int m_int_data_member;
			static int m_global_static_member;
		};

	}
}
