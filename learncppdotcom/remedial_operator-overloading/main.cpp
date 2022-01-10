#include <iostream>

class IntList
{
private:
    int m_list[10];

public:
//    void setItem(int index, int value) { m_list[index] = value; }
//    int getItem(int index) const { return m_list[index]; }

int& operator[] (int index); // Overloading []. Normally returns an element.
};

int& IntList::operator[](int index)
{
    return m_list[index];
}

int main()
{
//    IntList list{};
//    list.setItem(3, 4);
//    std::cout << list.getItem(3) << '\n';

    IntList list{};
    list[2] = 3;
    std::cout << list[2] << '\n';

    return 0;
}
