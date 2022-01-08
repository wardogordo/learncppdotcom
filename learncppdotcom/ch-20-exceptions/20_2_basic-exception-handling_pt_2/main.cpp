#include <cmath> // for sqrt() function
#include <iostream>

int main()
{
    std::cout << "Enter a number:";
    double x {};
    std::cin >> x;

    try // Look for exceptions that occur within try block and route to attached catch block(s).
    {
        // If user entered a negative number, this is an error condition.
        if (x < 0.0)
            throw "Can not take sqrt of negative number."; // Throw exception of type const char*.

            // Otherwise, print the answer.
        std::cout << "The sqrt of " << x << " is " << std::sqrt(x) << '\n';
    }
    catch (const char* exception) // Catch exceptions of type const char*
    {
        std::cerr << "Error: " << exception << '\n';
    }

    return 0;
}
