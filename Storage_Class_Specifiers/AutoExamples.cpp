#include "AutoExamples.h"
#include <vector>
#include <memory>

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

            //equivalent
            int  j = 0;
            auto k = 0;

            std::vector<int> l_vec{1,2,3,4};
            
            //point to iterator
            std::vector<int>::iterator l_begin = l_vec.begin();
            auto l_begin_itr = l_vec.begin();

            std::vector<int>::iterator l_end = l_vec.end();
            auto l_end_itr = l_vec.end();

            std::vector<int>::const_iterator l_const_begin = l_vec.cbegin();
            const auto l_const_begin_itr = l_vec.cbegin();

            std::vector<int>::const_iterator l_const_end   = l_vec.cend();
            const auto l_const_end_itr = l_vec.cend();

            //make unique pointer

            class CABC final
            {
            public:
                CABC() = default;
                ~CABC() = default;
            };

            CABC* l_ptr = new CABC();//Raw pointer
            auto l_abc_ptr = std::make_unique<CABC>();
            auto l_ptr_from_raw_pointer = l_ptr;

            CABC* l_from_smart_pointer = l_abc_ptr.get();

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