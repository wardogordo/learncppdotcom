#include <iostream>
#include <string>

class Base
{
protected:
    int m_value{};

public:
    Base(int value)
        : m_value(value)
    {
    }

    virtual ~Base() = default;
};

class Derived : public Base
{
protected:
    std::string m_name{};

public:
    Derived(int value, const std::string name)
        : Base{ value }, m_name{ name }
    {
    }

        const std::string getName() const { return m_name; }
};

Base* getObject(bool returnDerived)
{
    if (returnDerived)
        return new Derived{ 1, "Apple"};
    else
        return new Base(2);
}

int main()
{


    return 0;
}