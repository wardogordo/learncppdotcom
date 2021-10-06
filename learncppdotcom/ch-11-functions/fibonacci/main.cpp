#include <iostream>

int fibonacci(int count)
{
    if (count < 0)
        return 666;
    if (count == 0)
        return 0;
    if (count == 1)
        return 1;
    return fibonacci(count - 1) + fibonacci(count - 2);
}

int main()
{
    int input {};
    std::cout << "Give me a Fib count: ";
    std::cin >> input;
    std::cout << "Your Fibonacci number is " << fibonacci(input);

    return 0;
}
