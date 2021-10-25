#include <iostream>

class MinMax
{
private:
    int m_min {};
    int m_max {};

public:
    MinMax(int min, int max)
    {
        m_min = min;
        m_max = max;
    }

    int getMin() const { return m_min; }
    int getMax() const { return m_max; }

    friend MinMax operator+(MinMax &m1, MinMax &m2);
    friend MinMax operator+(MinMax &m1, int value);
    friend MinMax operator+(int value, MinMax &m1);
};

MinMax operator+(const MinMax &m1, const MinMax &m2)
{
    int min{ m1.m_min < m2.m_min ? m1.m_min : m2.m_min };
    int max{ m1.m_max > m2.m_max ? m1.m_max : m2.m_max };

    return { min, max };
}

MinMax operator+(const MinMax &m1, int value)
{
    int min{ m1.m_min < value ? m1.m_min : value };
    int max{ m1.m_max > value ? m1.m_max : value };

    return { min, max };
}

MinMax operator+(int value, const MinMax &m)
{
    return { m + value };
}

int main()
{
    MinMax m1{ 10, 15 };
    MinMax m2{ 8, 11 };
    MinMax m3{ 3, 12 };

    return 0;
}