#include <iostream>
#include <string>
#include <string_view>

class ArrayException
{
private:
    std::string  m_error;

public:
    ArrayException(std::string error)
        : m_error{ error }
    {
    }

    std::string_view getError() const { return m_error; }
};

class IntArray
{
private:
    int m_data[3]{}; // Assume array length 3 for simplicity.

public:
    IntArray() {};

    int getLength() const { return 3; }

    int& operator[](const int index)
    {
        if (index < 0 || index >= getLength())
            throw ArrayException{ "IntArray index is out of range." };

        return m_data[index];
    }
};

int main()
{
    IntArray array;

    try
    {
        int value{ array[3] }; // Out of range subscript
    }
    catch (const ArrayException &exception)
    {
        std::cerr << "An array exception occurred: (" << exception.getError() << ")\n";
    }

    return 0;
}
