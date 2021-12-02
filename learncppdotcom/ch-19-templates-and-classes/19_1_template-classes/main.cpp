#include <iostream>
#include "Array.h"

int main()
{
    Array<int> intArray { 12 };
    Array<double> doubleArray { 12  };

    for (int i = 0; i < intArray.getLength(); ++i)
    {
        intArray[i] = i;
        doubleArray[i] = i + 0.65;
    }

    for (int i{ intArray.getLength() - 1}; i >= 0 ; --i)
    {
        std::cout << intArray[i] << '\t' << doubleArray[i] << '\n';
    }
    return 0;
}
