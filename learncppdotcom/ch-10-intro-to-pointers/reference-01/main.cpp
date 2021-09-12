#include <iostream>

int main()
{
    int value{ 5 };
    int &ref{ value };

    std::cout << "value: " << value << '\n';
    std::cout << "ref: " << ref << '\n';
    ref = 7;
    std::cout << "ref: " << ref << '\n';
    std::cout << "value: " << value << '\n';
    std::cout << "&ref: " << &ref << '\n';
    std::cout << "&value: " << &value << '\n';

    return 0;
}
