#include <iostream>

class Base
{
public:
    Base() {}
};

class Derived : public Base
{
public:
    Derived() {}
};

int main()
{
    try
    {
        throw Base(); // Base falls through to Base handler. Order of catch blocks
                        // is important in catching derived class exceptions.
    }
    catch (const Derived &derived)
    {
        std::cerr << "caught Derived";
    }
    catch (const Base &base)
    {
        std::cerr << "caught Base";
    }


    return 0;
}
