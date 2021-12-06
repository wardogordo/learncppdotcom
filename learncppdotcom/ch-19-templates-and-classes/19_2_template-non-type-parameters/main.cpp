#include <iostream>

template <typename T, int size> // size is an integral non-type parameter
class StaticArray
{
private:
    // The non-type parameter controls the size of the array
    T m_array[size]{};

public:
    T* getArray();

    T& operator[](int index)
    {
        return m_array[index];
    }
};

// Showing how a function for a class with a non-type parameter is defined outside of the class
template <typename  T, int size>
T* StaticArray<T, size>::getArray()
{
    return m_array;
}

int main()
{
   // Declare an integer array with room for 12 integers
   StaticArray<int, 12> intArray;

   // Fill it up, setting the value to the same number as its index
    for (int i = 0; i < 12; ++i)
        intArray[i] = i; // Single-line function body can be written without curly braces, indented.

    // Print the array in reverse order
    for (int i = 11; i >= 0; --i)
        std::cout << intArray[i] << ' ';
    std::cout << '\n';

    // Declare a double buffer with room for 4 doubles
    StaticArray<double, 4> doubleArray;

    // Fill it up, calculating the value using its index
    for (int i = 0; i < 4; ++i)
        doubleArray[i] = 4.4 + 0.1 * i;

    // Print the array in order
    for (int i = 0; i < 4; ++i)
        std::cout << doubleArray[i] << ' ';

    return 0;
}
