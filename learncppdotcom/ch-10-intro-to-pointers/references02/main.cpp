#include <iostream>

class Study
{
private:
    int m_myInteger;
public:
    Study(int myInteger) { m_myInteger = myInteger;}

    void setMyInteger(int myInt) { m_myInteger = myInt;}
    int getMyInteger() { return m_myInteger;}
};



int main()
{
    Study hoozle = Study(76);
    Study hizzle = Study(44);

    std::cout << "Hoozle: " << hoozle.getMyInteger() << '\n';
    std::cout << "Hizzle: " << hizzle.getMyInteger() << '\n';

    hoozle.setMyInteger(67);
    std::cout << "Hoozle: " << hoozle.getMyInteger() << '\n';

    int myPublicInt { 11 };
    std::cout << "myPublicInt: " << myPublicInt << '\n';

    int& myRefVar = myPublicInt;
    int myNonRefVar = myPublicInt;

    std::cout << "myPublicInt: " << &myPublicInt << '\n';
    std::cout << "myRefVar: " << &myRefVar << '\n';
    std::cout << "myNonRefVar: " << &myNonRefVar << '\n';

    return 0;
}
