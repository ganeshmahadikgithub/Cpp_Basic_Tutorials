#pragma once

#include <iostream>

namespace SPECIFIER
{
	namespace STATIC
	{
		static int m_global_member; //if not initialized the by default initialized with 0

		class CStatic_Specifiers final
		{
		public:
			CStatic_Specifiers();
			~CStatic_Specifiers() = default;

		public:
			static void WriteMemberData();
			void DisplayMemberData();
			void StaticLocalScopeData(const int f_param);

		private:
			static int m_static_member;
			int m_non_static_member;

		};
	}
}
