#include <iostream>

int Fibbi(int n)
{
    if (n <= 2)
        return 1;
    return Fibbi(n - 1) + Fibbi(n - 2);
}


int main()
{
    int nth{};
    std::cout << "Enter your choice of nth of the Fibonacci sequence: ";
    std::cin >> nth;
    std::cout << "Your Fibonacci number is " << Fibbi(nth);
    return 0;
}
