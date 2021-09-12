#include <iostream>

int main()
{
    int value{ 5 };
    int* ptr{ &value };
    std::cout << "value is: " << value << '\n';
    std::cout << "&value is: " << &value << '\n';
    std::cout << "*&value is: " << *&value << '\n';
    std::cout << "ptr is: " << ptr << '\n';
    std::cout << "*ptr is: " << *ptr;

    return 0;
}
