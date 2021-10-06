#include <iostream>
#include <algorithm>
#include <array>

bool greater(int a, int b)
{
    return (a > b);
}

bool lesser(int a, int b)
{
    return (a < b);
}

bool equal(int a, int b)
{
    return (a == b);
}

int main()
{
    std::array arr{ 13, 90, 99, 5, 40, 80 };

    std::sort(arr.begin(), arr.end(), greater);

    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    return 0;
}
