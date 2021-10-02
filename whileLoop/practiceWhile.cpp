#include <iostream>

int main()
{
    int sum = 0, val1 = 1;
    while (sum < 10)
    {
        sum += val1;
        std::cout << sum << std::endl;
    }
    std::cout << sum << std::endl;
}