#include <iostream>

int enterInt()
{
    std::cout << "Please enter an Integer: ";
    int x{};
    std::cin >> x;

    return x;
}