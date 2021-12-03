#include <iostream>
#include "Array.h"

int main()
{
    Array<int> intArray { 3 };
    Array<double> doubleArray { 3 };

    for (int i = 0; i < intArray.getlength(); ++i)
    {
        intArray[i] = i;
        doubleArray[i] = i + 33.42;
    }

    for (int i{ intArray.getlength() - 1};  i > 0; --i)
    {
        std::cout << intArray[i] << '\t' << doubleArray[i] << '\n';
    }

   return 0;
}
