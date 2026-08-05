#include <iostream>
#include <format>

int main()
{
    const int number = 99;

    for (int i = number; i > 0 ; i--)
    {
        std::cout << std::format(R"({} bottles of beer on the wall
{} bottles of beer
Take one down, pass it around)", i,i);
    }

    return 0;
}