#include <functional> // std::reference_wrapper
#include <iostream>
#include <vector>
#include <string>

// Here’s an example using std::reference_wrapper in a std::vector:
int main()
{
    std::string tom{ "Tom" };
    std::string berta{ "Berta" };

    std::vector<std::reference_wrapper<std::string>> names{ tom, berta }; // Stored by reference, not value

    std::string  jim{ "Jim" };

    names.push_back(jim);

    for (auto name : names)
    {
        // Use the get() member function to get the referenced string.
        name.get() += " Beam";
        std::cout << name.get() << '\n';
    }



    return 0;
}
