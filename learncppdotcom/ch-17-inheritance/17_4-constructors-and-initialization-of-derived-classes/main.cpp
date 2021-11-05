#include <iostream>
#include <string>

class Base
{
private:
    int m_Id{};

public:
    Base(int id=0)
        : m_Id{id}
    {
    }

    int getId() const { return m_Id; }
};

class Derived : public Base
{
private:
    double m_cost{};

public:
    Derived(int id, double cost)
        : m_cost{ cost }
        , Base{ id }
    {
    }

    double getCost() const { return  m_cost; };
};


int main()
{
    Derived derived(24, 39.99);
    std::cout << "derived: id " << derived.getId()  << "; cost $" << derived.getCost() << '\n';
    return 0;
}
