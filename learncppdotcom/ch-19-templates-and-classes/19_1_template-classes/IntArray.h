//
// Created by wardh on 11/29/2021.
//

#ifndef INC_19_1_TEMPLATE_CLASSES_INTARRAY_H
#define INC_19_1_TEMPLATE_CLASSES_INTARRAY_H

#include <cassert>

template <typename T> // declaring the variable to represent the type
class IntArray
{
private:
    int m_length{};
    T* m_data{};

public:
    IntArray(int length)
    {
        assert(length > 0);
        m_data = new T[length]{}; // Allocated an array of object of type T
        m_length = length;
    }

    // We don't want to allow copies of IntArray to be created.
    IntArray(const IntArray&) = delete;
    IntArray& operator=(const IntArray&) = delete;

    ~IntArray()
    {
        delete[] m_data;
    }

    void erase()
    {
        delete[] m_data;
        // We need to make sure we set m_data to 0 here, otherwise it will
        // be left pointing at deallocated memory!
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int index) // Returns a reference to whatever type T is
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    // Templated getLength() function defined below
    int getLength() const;
};

// Member functions defined outside the class need their own template declaration
template <typename T>
int Array<T>::getLength() const
{
    return m_length; // Class name is now Array<T>, not Array.
}

#endif //INC_19_1_TEMPLATE_CLASSES_INTARRAY_H
