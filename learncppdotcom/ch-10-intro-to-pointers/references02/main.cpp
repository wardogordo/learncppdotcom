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

void changeN(int ref)
{
    ref = 6;
}


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

    int& myReferenceVariable = myPublicInt;
    int myNonReferenceVariable = myPublicInt;
    int* myPointer { &myPublicInt };

    std::cout << "myPublicInt: " << &myPublicInt << '\n';
    std::cout << "myReferenceVariable: " << &myReferenceVariable << '\n';
    std::cout << "myNonReferenceVariable: " << &myNonReferenceVariable << '\n';
    std::cout << "myPointer: " << myPointer;

    int n{ 5 };
    std::cout << n << '\n';

    changeN(n);
    std::cout << n << '\n';



    return 0;
}
