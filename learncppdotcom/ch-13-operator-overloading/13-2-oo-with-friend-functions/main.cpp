#include <iostream>

class Cents
{
private:
    int m_cents {};

public:
    Cents(int cents) { m_cents = cents; }
    int getCents() const { return m_cents; }

    friend Cents operator+(Cents const &c1, Cents const &c2);
    friend Cents operator-(Cents const &c1, Cents const &c2);

};

Cents operator+(Cents const &c1, Cents const &c2)
{
    return Cents(c1.m_cents + c2.m_cents);
}

Cents operator-(Cents const &c1, Cents const &c2)
{
    return Cents(c1.m_cents - c2.m_cents);
}

int main()
{
    Cents centsOne(11);
    Cents centsTwo(7);
    Cents centsSum{ centsOne + centsTwo };
    std::cout << "My Cents objects addition is: " << centsSum.getCents() << '\n';
    Cents centsDifference{ centsOne - centsTwo };
    std::cout << "My Cents objects subtraction is: " << centsDifference.getCents() << '\n';

    return 0;
}
