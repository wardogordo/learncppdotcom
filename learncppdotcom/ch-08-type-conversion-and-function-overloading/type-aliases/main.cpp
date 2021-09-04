#include <iostream>

int getUserInput()
{
    int i{};
    std::cin >> i;
    return i;
}

int main()
{
    std::cout << "How many bananas did you eat today?";

    if (int iBananasEaten{ getUserInput() }; iBananasEaten <=2)
        std::cout << "That's a tasty treat.";
    else
        std::cout << "Wow--you ate a lot of bananas!";


    return 0;
}
