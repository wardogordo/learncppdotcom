#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

static bool containsNut(std::string_view str)
{
    return (str.find("nut") != std::string_view::npos);
}

static bool isAFunction(std::string_view stringView)
{
    return (stringView.find("bal") );
}

int main()
{
    constexpr const std::basic_string_view<char> bleer{ "balance" };

    std::cout << "isAFunction: " << isAFunction(bleer) << '\n';

    constexpr std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };

    const auto found{std::find_if(arr.begin(), arr.end(), containsNut)};

    if (found == arr.end())
    {
        std::cout << "No nuts - sorry.\n";
    }
    else
    {
        std::cout << "Found " << *found << '\n';
    }
    return 0;
}
