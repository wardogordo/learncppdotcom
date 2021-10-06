#include <iostream>
#include <algorithm>
#include <array>
#include <string_view>

std::string w {"big"};

std::string x {"wal"};

std::string y{"super"};

std::string z {};

static bool containsNut(std::string_view str)
{
    return (str.find(x) != std::string_view::npos);
}

static bool myBoolTest(std::string string)
{
    return string == "big";
}

int main()
{
    constexpr std::array<std::string_view, 4> arr{"apple", "banana", "walnut", "lemon"};

    const auto found{std::find_if(arr.begin(), arr.end(), containsNut)};

    if (found == arr.end())
    {
        std::cout << "Sorry - no nuts.\n";
    }
    else
    {
        std::cout << "Found '" << x << "' in element: " << *found << '\n';
    }

    std::cout << "containsNut returns: " << containsNut(x) << '\n';

    std::cout << "myBoolTest(): " << myBoolTest(w);


    return 0;
}
