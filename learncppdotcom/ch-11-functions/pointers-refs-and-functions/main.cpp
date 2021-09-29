#include <iostream>

int value{ 6 };

int* ptrtovalue{ &value };
int& reftovalue{ value };

int main()
{
    std::cout << ptrtovalue << '\n';
    std::cout << reftovalue << '\n';
    std::cout << &reftovalue << '\n';
    return 0;
}
