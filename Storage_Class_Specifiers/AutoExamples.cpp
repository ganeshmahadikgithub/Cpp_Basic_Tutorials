#include "AutoExamples.h"

namespace SPECIFIER
{
    namespace AUTO
    {
        void CAutoExamples::DefineConstAutoVAriable() const
        {
            const auto l_data = { 0 };
            //constexpr auto l_data1 = { 0.01f };//not proper because lifetime will less so not allowed required static
            const auto l_data1 = { 0.05f };

        }

        void CAutoExamples::DefineAutoVariable() const
        {
            auto l_data = { 100 };   // int datatype
            auto l_data1 = nullptr;  // int pointer
            auto l_data2 = { 0.93f };// int float
            auto l_data3 = {10/2.0f};// int datatype

        }

        void CAutoExamples::InitializerListAutoVariable() const
        {
            auto l_data = { 0.01f };  //float type
            auto l_initializelist = { 1,2,3,4 };//std::initializer_list<int>
          //  auto l_initializelist = { 1,2,3.0f,4 };//compile ime error
           // auto l_data1 { 8, 9 };//gives error it will deduce into single element so required =
        }

        float CAutoExamples::ExpressionAutoVariable() const
        {
            auto l_factor(10 * PI * PI);//expression
            return l_factor;
        }
    }
}