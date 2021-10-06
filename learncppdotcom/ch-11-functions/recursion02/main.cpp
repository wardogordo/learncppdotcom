#include <iostream>

int sumTo(int sumto)
{
    if (sumto <= 0)
        return 0; // base case (termination condition) when user passed in an unexpected
        // parameter (0 or a negative integer)
        else if (sumto == 1)
        {
            std::cout << "termination condition - sumto: " << sumto;
            return  1; // (normal base case (termination condition)
        }

        else
        {
         std::cout << "sumto: " << sumto << '\n';
        return sumTo(sumto - 1) + sumto; // recursive function call
        }

}


int main()
{
    sumTo(5);
    return 0;
}
