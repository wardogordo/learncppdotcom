#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v{ 1, 2, 3, 4 };
    int n1 = 3;
    int n2 = 5;
    auto is_even = [](int i){return i % 2 == 0;};

    std::cout << "is_even: " << is_even(4);

    return 0;
}

