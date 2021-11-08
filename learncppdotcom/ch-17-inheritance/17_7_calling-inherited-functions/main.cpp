#include <iostream>

class Base
{
private:
    int m_value{};

public:
    Base(int value)
        : m_value(value)
    {
    }

    void identify() const { std::cout << "I am Base, y'all.\n";}
};

class Derived : public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }

    void identify() const {
        Base::identify();
        std::cout << "I'm Derived and cool.\n";}
};

int main()
{
//    Base base1(6);
//    base1.identify();
    Derived derived1(42);
    derived1.identify();
    return 0;
}