#include <iostream>

 char c{};

int main()
{

    do
    {
        std::cout << "Please enter a vowel: ";
        std::cin >> c;
    }
    while (c != 'a' && c != 'A');

    std::cout << "That's correct.";

    return 0;
}
