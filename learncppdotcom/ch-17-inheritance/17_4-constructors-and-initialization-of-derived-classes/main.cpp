#include <iostream>
#include <string>

class Person
{
private:
    std::string m_name{};
    int m_age{};

public:
    Person(const std::string& name, int age)
        : m_name{ name }
        , m_age{ age}
    {
    }
    std::string getName(){ return m_name; };
    int getAge(){ return m_age; };
    void printNameAndAge(){ std::cout << m_name << " is " << m_age << ".\n"; };
};

class BaseballPlayer : public Person
{
private:
    double m_battingAverage{};
    int m_homeRuns{};

public:
    BaseballPlayer(std::string name, int age, double battingAverage, int homeRuns)
        : m_battingAverage{ battingAverage}
        , m_homeRuns{ homeRuns}
        , Person{ name, age }
    {
    }

    double getBattingAverage(){ return m_battingAverage; };
    int getHomeRuns(){ return m_homeRuns; };
    void printBaAndHr(){ std::cout << "\tBatting average: " << m_battingAverage << "\n\tHome runs: " << m_homeRuns << '\n'; };
};

int main()
{
    BaseballPlayer myPlayer("Mike", 24, .292, 12);
    std::cout << "myPlayer is " << myPlayer.getName() << ". \n";
    myPlayer.printNameAndAge();
    myPlayer.printBaAndHr();

    return 0;
}