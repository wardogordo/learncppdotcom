#include <iostream>

class Accumulator
{
private:
    int m_value;
public:
    Accumulator() { m_value = 0; }
    void add(int value) { m_value += value; }
    int GetValue()
    {
        return m_value;
    }

    friend void reset(Accumulator& accumulator);
};

void reset(Accumulator& accumulator)
{
    accumulator.m_value = 0;
}

int main()
{
    Accumulator acc;
    std::cout << acc.GetValue() << '\n';
    acc.add(5);
    std::cout << acc.GetValue() << '\n';
    reset(acc);
    std::cout << acc.GetValue() << '\n';

    return 0;
}
