#include <iostream>
#include "Array.h"

int main()
{
    Array<int> arrInt{ 3, 5 };
    std::cout << "arrInt: " << arrInt.getNum1() << '\n';

    Array<float> arrFloat{ 4.23, 6.778 };
    std::cout << "arrFloat: " << arrFloat.getNum1() << '\n';

    int* arr = new int[5]{ 845, 3, 2, 77, 64 };
    std::cout << arr << '\n';
    std::cout << arr[0] << '\n';

    return 0;
}
