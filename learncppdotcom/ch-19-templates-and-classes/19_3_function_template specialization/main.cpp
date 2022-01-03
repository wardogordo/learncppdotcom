#include <iostream>


template <typename T>
class Storage
{
private:
    T m_value{};
public:
    Storage(T value)
        : m_value { value }
    {
    }

    void print()
    {
        std::cout << m_value << '\n';
    }
};

template <>
void Storage<double>::print()
{
    std::cout << std::scientific << m_value << '\n';
}

int main()
{

    // Define some storage units
    Storage<int> myInt(538);
    myInt.print();
    Storage<bool> myBool(0);
    myBool.print();
    Storage<double> myDouble(524.2998);
    myDouble.print();

    // Dynamically allocate a temporary string
    std::string s;

    // Ask user for their name
    std::cout << "Enter your name, please:";
    std::cin >> s;

    // Store the name
    Storage<char*> storage(s.data());

    storage.print(); // Prints the name

    s.clear(); // Clear the std::string

    storage.print(); // Prints nothing

    return 0;
}
