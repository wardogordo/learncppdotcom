#include <iostream>

class Base
{
protected:
    int m_value{};

public:
    Base(int value)
        : m_value(value)
    {
    }

    std::string_view getName() const { return "Base this is."; }
    int getValue() const { return m_value; }
};

class Derived : public Base
{
public:
    Derived(int value)
        : Base(value)
    {
    }

    std::string_view getName() const { return "Derived am I."; }
    int getValueDoubled() const { return m_value * 2; }
};

int main()
{
    Derived derived1{ 777 };
    std::cout << "derived1 is a " << derived1.getName() << " : value  " << derived1.getValue() << '\n';

    Derived& rDerived1{ derived1 };
    std::cout << "rDerived1: " << rDerived1.getName() << " : value " << rDerived1.getValue() << '\n';

    Derived* pDerived1{ &derived1 };
    std::cout << "pDerived1: " << pDerived1->getName() << " value: " << pDerived1->getValue() << '\n';

    Base& rBase1{ derived1 };
    std::cout << "rBase1: " << rBase1.getName() << " value: " << rBase1.getValue() << '\n';

    Base* pBase1{ &derived1 };
    std::cout << "pBase1: " << pBase1->getName() << " value: " << pBase1->getValue() << '\n';

    return 0;
}