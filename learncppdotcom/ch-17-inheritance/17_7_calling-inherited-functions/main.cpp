#include <iostream>

class Base
{
protected:
    int m_value{};

public:
    Base(int value)
        : m_value{ value }
    {
    }

    void identify() const { std::cout << "I am a Base.\n"; }
};

class Derived : public Base
{
public:
    Derived(int value)
        : Base{ value }
    {
    }

    void identify() const { std::cout << "I am a Derived.\n";}
};

int main()
{
    Base base(6);
    base.identify();
    Derived derived{ 11 };
    derived.identify();

    return 0;
}
