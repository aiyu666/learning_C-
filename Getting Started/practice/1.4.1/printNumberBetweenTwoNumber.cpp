#include <iostream>

int main()
{
    int val1, val2;
    std::cout << "Please input two number, I will print all of the number between that two number" << std::endl;
    std::cin >> val1 >> val2;
    if (val1 < val2)
    {
        while (val1 < val2 - 1)
        {
            ++val1;
            std::cout << val1 << std::endl;
        }
    }
    else
    {
        while (val2 < val1 - 1)
        {
            ++val2;
            std::cout << val2 << std::endl;
        }
    };
}
