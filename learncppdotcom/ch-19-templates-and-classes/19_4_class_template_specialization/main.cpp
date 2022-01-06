#include <iostream>

template <typename T>
class Storage8
{
private:
    T m_array[8];

public:
    void set(int index, const T &value)
    {
        m_array[index] = value;
    }

    const T& get(int index) const
    {
        return m_array[index];
    }
};

template <> // Template class with no templated parameters
class Storage8<bool> // This template class uses the same name, but just handles bools.
{
private:
    unsigned char m_data{};

public:
    void set(int index, bool value)
    {
        // Figure out which bit we're getting
        auto mask{ 1 << index };

        if (value) // If we're setting a bit
            m_data |= mask; //Use bitwise-or to turn that bit on
        else
            m_data &= ~mask; // bitwise-and the inverse mask to turn that bit off
    }

    bool get(int index)
    {
        // Figure out which bit we're getting
        auto mask{ 1 << index };
        // bitwise-and to get the value of the bit we're interested in
        // Then implicit cast to boolean
        return (m_data & mask);
    }



    void printArray()
    {
        for (int count = 0; count < 8; ++count)
        {

        }
    }

};

void checkAlice()
{

    bool alice{ false };
    if (alice)
        std::cout << "Alice" << '\n';
    else
        std::cout << "no Alice" << '\n';
}


void checkAlice();

int main()
{
  /*
    checkAlice();

    // Define a Storage8 for integers (instantiates Storage8<T>, where T = int)
    Storage8<int> intStorage;

    for (int count{ 0 }; count < 8; ++count)
        intStorage.set(count, count);

    for (int count{ 0 }; count < 8; ++count)
        std::cout << intStorage.get(count) << '\n';
*/
    // Define a Storage8 for bool (instantiates Storage8<bool> specialization)
    Storage8<bool> boolStorage;

    for (int count = 0; count < 8; ++count)
    {
        boolStorage.set(count, count & 3);
    }

    std::cout << std::boolalpha;


    for (int count = 0; count < 8; ++count)
    {
        std::cout << boolStorage.get(count) << '\n';
    }



return 0;
}
