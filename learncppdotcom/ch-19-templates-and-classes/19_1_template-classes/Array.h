//
// Created by wardh on 11/30/2021.
//

#ifndef INC_19_1_TEMPLATE_CLASSES_ARRAY_H
#define INC_19_1_TEMPLATE_CLASSES_ARRAY_H

#include <cassert>

template <typename T> // declaring the variable to represent the type
class Array
{
private:
    int m_length{};
    T* m_data{};

public:
    Array(int length)
    {
        assert(length > 0);
        m_data = new T[length]{}; // Allocated an array of object of type T
        m_length = length;
    }

    // We don't want to allow copies of Array to be created.
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
        // be left pointing at deallocated memory!
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int index) // Returns a reference to whatever type T is
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    // Templated getLength() function can be defined within the class or outside.
    // Note that outside the class, it must be defined as Array<T>, whereas within
    // it can be defined normally.
    int getLength() const
    {
        return m_length;
    }
};
/*

// Member functions defined outside the class need their own template declaration
template <typename T>
int Array<T>::getLength() const
{
    return m_length; // Class name is now Array<T>, not Array.
}
*/

#endif //INC_19_1_TEMPLATE_CLASSES_ARRAY_H
