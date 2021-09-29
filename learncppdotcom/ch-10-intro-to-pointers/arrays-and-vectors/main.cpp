#include <iostream>

int main()
{

    int array01[]{ 4, 3, 2, 44, 29, 11, 121 };
    std::cout << array01[3] << '\n';
    int array01size = static_cast<int>(std::size(array01));
    std::cout << "array01size: " << array01size << '\n';


    for (int i = 0; i < array01size; ++i)
    {
        std::cout << array01[i] << '\n';
    }
    

    return 0;
}
