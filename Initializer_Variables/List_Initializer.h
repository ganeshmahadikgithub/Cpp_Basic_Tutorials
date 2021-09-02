#pragma once
#include<iostream>
#include "Point.h"

using namespace std;

namespace INITIALIZER
{
    namespace LIST
    {

        struct data_t
        {
            int m_int_member;
            float m_float_member;
            CPoint m_point;
        };

        class List_InitializeClass final
        {
        public:
            List_InitializeClass(const int f_data1,const char f_data2);
            ~List_InitializeClass() = default;
            List_InitializeClass();

        private:
            int m_data;
            char m_char_data;
        };

        class List_InitializeConsumer final
        {
        public:
            List_InitializeConsumer() = default;
            void SetClass(List_InitializeClass f_obj) {}
            List_InitializeClass GetListBaseClass();
        };

        
    }
}
