#include <iostream>

int plusOperation(int x, int y)
{
    std::cout << "When you add " << x << " and " << y << " the answer is then: " << x + y << '\n';
    return 0; 
}

int minusOperation(int x, int y)
{
    std::cout << "When you subtract " << x << " and " << y << " the answer is then: " << x - y << '\n';
    return 0;
}

int divideOperation(int x, int y)
{
    std::cout << "When you divide " << x << " and " << y << " the answer is then: " << x / y << '\n';
    return 0;
}

int multiplyOperation(int x, int y)
{
    std::cout << "When you multiply " << x << " and " << y << " the answer is then: " << x * y << '\n';
    return 0;
}