#include <iostream>

int main()
{
    int i{ 100 };
    i = static_cast<double>(i) / 2.51326;

    std::cout << "Quotient: " << i;

    return 0;
}
