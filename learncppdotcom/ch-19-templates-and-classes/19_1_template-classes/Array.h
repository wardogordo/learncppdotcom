//
// Created by wardh on 11/30/2021.
//

#ifndef INC_19_1_TEMPLATE_CLASSES_ARRAY_H
#define INC_19_1_TEMPLATE_CLASSES_ARRAY_H

#include <cassert>

template <typename T>
class Array
{
private:
    int m_length{};
    T* m_data{};

public:
    Array(int length)
    {
        assert(length > 0);
        m_data = new T[length]{}; // Allocated an array of objects of type T
        m_length = length;
    }

    Array(const Array&) = delete;
    Array& operator=(const Array&) = delete;

    ~Array()
    {
        delete[] m_data;
    }

    void erase()
    {
        delete[] m_data;
        // We need to make sure we set m_data to 0 here, otherwise it will
        // be left pointing at deallocated memory.
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int index)
    {
        assert(index >= 0  && index < m_length);
        return m_data[index];
    }

    int getLength() const
    {
        return m_length;
    }

};

#endif //INC_19_1_TEMPLATE_CLASSES_ARRAY_H
