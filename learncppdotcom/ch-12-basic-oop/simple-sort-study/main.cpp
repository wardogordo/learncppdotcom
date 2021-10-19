#include <iostream>

int myArray[] { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
int loopsTotal{ 0 };

int main()
{
    int len = sizeof(myArray) / sizeof (myArray[0]);
    std::cout << "\nLength of myArray: " << len << " elements.\n";

    std::cout << "myArray[" << len << "]{ ";
    for (int i = 0; i < len; ++i)
    {
        if (i == len - 1)
            std::cout << myArray[i];
        else
            std::cout << myArray[i] << ", ";
    }
    std::cout << " }\n";

    int firstElement = { 0 };

    for (int i = firstElement; i < len; ++i)
    {
        std::cout << "\nOUTER LOOP: i = " << i << '\n';
        for (int j = i + 1; j < len; ++j)
        {
            std::cout << "\tINNER LOOP: j = " << j << '\n';
            if (myArray[j] < myArray[i])
            {
                std::cout << myArray[j] << " is less than " << myArray[i] << '\n';
                std::swap(myArray[i], myArray[j]);
                std::cout << "myArray[" << i << "] is now " << myArray[i] << '\n';
            }
            else
                std::cout << "myArray[" << i << "] is still " << myArray[i] << '\n';

            loopsTotal += 1;

        }
        std::cout << "\tmyArray[" << i << "] is set to " << myArray[i] << '\n';
        std::cout << "\t\tEND OF OUTER LOOP " << i << '\n';
        loopsTotal += 1;
    }

    std::cout << '\n';
    std::cout << "myArray[]{ ";
    for (int i = 0; i < len; ++i)
    {
        if (i == (len - 1))
            std::cout << myArray[i] << " }\n";
        else
            std::cout << myArray[i] << ", ";
    }

    std::cout << '\n';

    for (int i = 0; i < len; ++i)
    {
        std::cout << "Element " << i << " of myArray: " << myArray[i] << '\n';
    }

    std::cout << "\nTotal number of loops: " << loopsTotal << '\n';

    return 0;
}
