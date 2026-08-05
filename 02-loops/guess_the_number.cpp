#include <iostream>

int main()
{
    const int secretNumber = 64;
    int guessedNumber;

    do
    {
    std::cout << "Guess the number: ";
        std::cin >> guessedNumber;
    }
    while ( guessedNumber != secretNumber );
    std::cout << "You guessed it correct!";

    return 0;
}