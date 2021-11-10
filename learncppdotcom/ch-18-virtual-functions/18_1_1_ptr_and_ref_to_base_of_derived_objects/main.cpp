#include <iostream>
#include <string_view>
#include <string>

class Animal
{
protected:
    std::string m_name{};

    Animal(std::string_view name)
        : m_name{ name }
    {
    }

    // Not sure what this does. He says: "To prevent slicing (covered later)"
    Animal(const Animal&) = default;
    Animal& operator=(const Animal&) = default;

public:
    std::string_view getName() const { return m_name; }
    std::string_view speak() const { return "???";}
};

class Cat : public Animal
{
public:
    Cat(std::string_view name)
        : Animal {name}
    {
    }

    std::string_view speak() const { return "Meow. Just."; }
};

class Dog : public Animal
{
public:
    Dog(std::string_view name)
        : Animal{ name }
    {
    }

    std::string_view speak() const { return "Wooflike."; }
};

int main()
{
    Cat cat1{"Hortensius"};
    std::cout << cat1.getName() << " is a cat and says \"" << cat1.speak() << "\"\n";

    Dog dog1{ "Ralph" };
    std::cout << dog1.getName() << " is a dog and says \"" << dog1.speak() << "\"\n";\

    const Animal* pAnimal{ &cat1 };
    std::cout << "pAnimal is named " << pAnimal->getName() << " and says \"" << pAnimal->speak() << "\".\n";

    pAnimal = &dog1;
    std::cout << "pAnimal is named " << pAnimal->getName() << " and says \"" << pAnimal->speak() << "\".\n";

    return 0;
}