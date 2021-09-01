#include <iostream>


int ExponentTotal(int base, int power)
{
    int total{1};

    for (int i = 0; i < power; ++i)
    {
        total *= base;
        std::cout << "Incremental total: " << total << "\n";
    }
    std::cout << "Total: " << total;
    return 0;
}

int main()
{
    ExponentTotal(5, 4);
}
