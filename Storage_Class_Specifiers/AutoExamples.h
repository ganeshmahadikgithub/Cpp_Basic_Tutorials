#pragma once
#include <iostream>
#include<initializer_list>

namespace SPECIFIER
{
	namespace AUTO
	{
		class CAutoExamples final
		{
		public:
			CAutoExamples() = default;
			~CAutoExamples() = default;

		public:
			void DefineConstAutoVAriable() const;
			void DefineAutoVariable() const;
			void InitializerListAutoVariable() const;
			float ExpressionAutoVariable() const;

		private:
			constexpr static auto PI = 3.3156f;
		};

	}
}

