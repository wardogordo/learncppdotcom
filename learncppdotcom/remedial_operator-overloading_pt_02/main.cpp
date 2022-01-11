#include <iostream>

class Member
{
public:
    Member()
    {
        std::cerr << "Member class constructor allocated some resources.\n";
    }

    ~Member()
    {
        std::cerr << "Member class destructor cleaned up any allocated resources.\n";
    }
};

class A
{
private:
    int m_x{};
    Member m_member;

public:
    A(int x) : m_x{x}
    {
        if (x <= 0)
            throw 1;
    }

    ~A()
    {
        std::cerr << "~A\n"; // Called if throw isn't called (x is not a negative number).
    }
};

int main()
{
    try
    {
        A a{ -3 };
    }
    catch (int)
    {
        std::cerr << "Oops!\n";
    }

    return 0;
}
