#include <iostream>

class Working
{
private:
    bool m_IAmWorking{};
public:
    Working(bool working)
        : m_IAmWorking{ working }
    {
    }
};

int main()
{
    Working working(true);
    auto amISize = sizeof(working);
    std::cout << amISize << '\n';

    return 0;
}
