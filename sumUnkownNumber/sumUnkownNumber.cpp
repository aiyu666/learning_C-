#include <iostream>

int main()
{
    // End of line unix is control+d , windows control+z
    int sum = 0, value = 0;
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}