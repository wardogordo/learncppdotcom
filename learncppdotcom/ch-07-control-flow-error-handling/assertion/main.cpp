#include <iostream>
#include <cassert>

int printDivision()
{
    int x{};
    int y{};
    int answer{};

    std::cout << "Gimme an x: ";
    std::cin >> x;
    std:: cout << "And now a y: ";
    std::cin >> y;
    assert( y != 0 && "You can't divide by zero.");
    answer = x / y;
    std::cout << "The answer is: " << answer;

    return 0;
}

int main()
{
    printDivision();
    return 0;
}
