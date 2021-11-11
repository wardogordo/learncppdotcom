#include <iostream>
#include <string>
#include <string_view>

class Animal
{
protected:
    std::string m_name;

    Animal(const std::string& name)
        : m_name{ name }
    {
    }

public:
    const std::string& getName() const { return m_name; }
    virtual std::string_view speak() const { return "???"; }
};

class Cat : public Animal
{
public:

    Cat(const std::string& name)
        : Animal(name)
    {
    }


    virtual std::string_view speak() const { return "Meeeeoooow..."; }
};

class Dog : public Animal
{
public:
    Dog(const std::string& name)
        : Animal(name)
    {
    }

    virtual std::string_view speak() const { return "La woof, la woof."; }
};

class ShowDog : public Dog
{
public:
    ShowDog(const std::string& name)
        : Dog(name)
    {
    }

    virtual std::string_view speak() const { return "I don't speak - I'm a show dog."; }
};

void report(const Animal& animal)
{
    std::cout << animal.getName() << " says " << animal.speak() << '\n';
}

int main()
{
    Cat cat1("Igg");
//    std::cout << cat1.getName() << " says " << cat1.speak() << '\n';
    Dog dog1("Dilbert");
//    std::cout << dog1.getName() << " says " << dog1.speak() << '\n';
    ShowDog dog2 ("Hardesty");
//    std::cout << dog2.getName() << " says \"" << dog2.speak() << "\"\n";
//    report(cat1);
//    report(dog2);
Cat cat2{ "Slicker" };
Cat cat3{"Munchkin" };
Dog dog3{ "Zaak" };

Animal* animals[]{ &dog1, &dog2, &dog3, &cat1, &cat2, &cat3 };
    for (const auto *animal : animals)
    {
        std::cout << animal->getName() << " says " << animal->speak() << ".\n";
    }
    std::cout << "\nI'm DONE." << '\n';

    return 0;
}