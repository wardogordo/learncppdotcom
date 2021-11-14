#include <iostream>

class Base
{
protected:
    int m_value;

public:
    Base(int value)
        : m_value{ value }
    {
    }

    virtual const char* getName() const { return "Base"; }
    int getValue() const { return m_value; }
};

class Derived : public Base
{
public:
    Derived(int value)
        : Base{ value }
    {
    }

    const char* getName() const override { return "Derived"; }
};

int main()
{
    Derived derived1 { 22 };
    Base* base1{ &derived1 };
    std::cout << "base1 is a " << base1->getName() << " with value " << base1->getValue() << '\n';

    Derived derived2 { 5 };
    Base base2 { derived2 };
    std::cout << "base2 is a " << base2.getName() << " with value " << base2.getValue() << '\n';


    return 0;
}