#include <iostream>

int main()
{
    const int fizz_number = 3;
    const int buzz_number = 5;
    const int fizz_buzz_number = 15;

    for (int i = 1; i <= 100; i++)
    {

        if (i % fizz_buzz_number == 0)
        {
            std::cout << "FizzBuzz";
        }
        else if (i % fizz_number == 0)
        {
            std::cout << "Fizz";
        }
        else if (i % buzz_number == 0)
        {
            std::cout << "Buzz";
        }
        else 
        {
            std::cout << i;
        }
        std::cout << '\n';
    }

    return 0;
}