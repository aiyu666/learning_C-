#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 0; val < 10; val++)
    {
        std::cout << "val:" << val << std::endl;
        sum += val;
        std::cout << "Sum:" << sum << std::endl;
    }
}