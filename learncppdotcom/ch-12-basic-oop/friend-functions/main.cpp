#include <iostream>

class Value
{
private:
    int m_value;
public:
    Value(int value) { m_value = value; }

    friend int readMyValue(Value& value);

    friend void resetMyValue(Value& value);

    friend void changeMyValue(Value& value, int new_m_value);
};

int readMyValue(Value& value) { return value.m_value; }
void resetMyValue(Value& value) { value.m_value = 0; }
void changeMyValue(Value& value, int new_m_value)
{
    value.m_value = new_m_value;
}

int main()
{
    Value myValue(5);
    std::cout << "myValue: " << readMyValue(myValue) << '\n';
    resetMyValue(myValue);
    std::cout << "myValue: " << readMyValue(myValue) << '\n';
    changeMyValue(myValue, 54);
    std::cout << "myValue is now now: " << readMyValue(myValue) << '\n';


    return 0;
}