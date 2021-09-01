#include <iostream>

int MinFundamentalSizesCpp()
{
    std::cout << "Minimum C++ size guarantees of fundamental types:\n";
    std::cout << "Character:\t " << sizeof(char) << " byte.\n";
    std::cout << "Short:\t\t " << sizeof(short) << " bytes.\n";
    std::cout << "Float:\t\t " << sizeof(float) << " bytes.\n";
    std::cout << "Double:\t\t " << sizeof(double) << " bytes.\n";
    std::cout << "Long Double:\t " << sizeof(long double) << " bytes.\n";

    return 0;
}

int main()
{
    MinFundamentalSizesCpp();

    return 0;
}
