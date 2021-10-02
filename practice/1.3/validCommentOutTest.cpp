#include <iostream>

int main()
{
    std::cout << "/*" << std::endl;
    std::cout << "*/" << std::endl;
    std::cout << /* "*/ " 123/* 123" /*"*/ << std::endl;
    // std::cout << /* "*/ " */;  error
}