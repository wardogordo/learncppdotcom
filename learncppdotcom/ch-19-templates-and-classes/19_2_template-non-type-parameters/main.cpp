#include <iostream>
#include "Array.h"

int main()
{
    Array<int> arrInt{ 3, 5 };
    std::cout << "arrInt: " << arrInt.getNum1() << '\n';

    Array<float> arrFloat{ 4.23, 6.778 };
    std::cout << "arrFloat: " << arrFloat.getNum1() << '\n';


    return 0;
}
