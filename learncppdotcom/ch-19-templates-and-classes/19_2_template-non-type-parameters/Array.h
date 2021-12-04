//
// Created by wardh on 12/4/2021.
//


#ifndef INC_19_2_TEMPLATE_NON_TYPE_PARAMETERS_ARRAY_H
#define INC_19_2_TEMPLATE_NON_TYPE_PARAMETERS_ARRAY_H

#include <iostream>


template<class T>
class Array
{
private:
    int m_length{};
    T* m_data{};
    T m_num1{};
    T m_num2{};

public:
    Array(int length, T &data)
    {
        m_length = length;
        m_data = data;
    }

    Array(T num1, T num2)
    {
        m_num1 = num1;
        m_num2 = num2;
    }

    T getNum1() const { return m_num1; }
};

#endif //INC_19_2_TEMPLATE_NON_TYPE_PARAMETERS_ARRAY_H
