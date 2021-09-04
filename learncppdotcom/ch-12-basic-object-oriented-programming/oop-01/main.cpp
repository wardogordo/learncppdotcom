#include <iostream>

struct MyFirstStruct
{
    int id{};
    int age{};
    double wage{};
};




int main()
{
    MyFirstStruct me{ 04, 33, 34000.00};
    std::cout << "ID:\t" << me.id << '\n' << "Age:\t" << me.age << '\n' << "Wage:\t" << me.wage;

    return 0;
}
