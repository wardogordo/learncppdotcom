#include <iostream>
#include <string>

std::string blissOut{ "Wowza!" };
int myInt{89};

int main()
{
    try
    {
        // Statements that may throw exceptions you want to handle go here.
        if (myInt != 87)
            throw blissOut;
    }
    catch (int x)
    {
        // Any exceptions of type int thrown within the above try block get sent here.
        std::cerr << "We caught an int exception with value: " << x << '\n';
    }
    catch (double) // No variable name since we don't use the eeption itself in the catch block below.
    {
        std::cerr << "We caught an exception of type double." << '\n';
    }
    catch (const std::string &string) // Catch classes by const reference
    {
        // Any exceptions of typ std::string thrown within the above try block get set here.
        std::cerr << "We caught an exception of type std::string." << '\n';
    }

    std::cout << "This statement comes after the try/catch blocks.\n";

    return 0;
}
