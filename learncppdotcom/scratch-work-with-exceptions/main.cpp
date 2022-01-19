#include <iostream>

class MyExceptionClass
{
private:
    std::string m_exception{};

public:
    MyExceptionClass(std::string exception)
        : m_exception(exception)
    {
    }

    std::string ShowException()
    {
        std::cerr << "Exception: " << m_exception << '\n';
        return 0;
    }
};


int main()
{
    MyExceptionClass myException { "I don't know what happened."};
//    myException.ShowException("help");

    try
    {
        throw myException;
    }
    catch (int)
    {
        std::cerr << "Blop." << '\n';
    }
    catch (MyExceptionClass)
    {
        std::cerr << "I am not a crook." << '\n';
        std::cerr << myException.ShowException();
    }

    return 0;
}
