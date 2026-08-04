#include <iostream>

int main()
{
    int answer;

    std::cout << R"(
Q1) What is the name of the world's longest river?

1) Missouri River
2) Nile
3) Amazon River
4) Yangtze River
    )";

    std::cout<< "\nEnter the correct option number:";
    std::cin >> answer;

        if (answer == 2)
        {
            std::cout << "You got it correct!\n";
        }
        else 
        {
            std::cout <<"I'm sorry...\n";
        }

    std::cout << R"(
Q2) How many bones are in the human body? 🦴

1) 92
2) 150
3) 206
4) 10
    )";

    std::cout<< "\nEnter the correct option number:";
    std::cin >> answer;

        if (answer == 3)
        {
            std::cout << "You got it correct!\n";
        }
        else 
        {
            std::cout <<"I'm sorry...\n";
        }

    std::cout << R"(
Q3) 😷 What food never spoils?

1) Honey
2) White rice
3) Salt
4) Sugar
    )";

    std::cout<< "\nEnter the correct option number:";
    std::cin >> answer;

        if (answer == 1)
        {
            std::cout << "You got it correct!\n";
        }
        else 
        {
            std::cout <<"I'm sorry...\n";
        }

    std::cout<<R"(
Q4) 🌱 What is the name of the tallest grass on earth?

1) Sugarcane
2) Elephant grass
3) Corn
4) Bamboo
    )";

    std::cout<< "\nEnter the correct option number:";    
    std::cin >> answer;

        if (answer == 4)
        {
            std::cout << "You got it correct!\n";
        }
        else 
        {
            std::cout <<"I'm sorry...\n";
        }

    std::cout<<R"(
Q5) 🎲 How many dots are on a pair of dice?

1) 42
2) 50
3) 60
4) 22
    )";
    
    std::cout<< "\nEnter the correct option number:";
    std::cin >> answer;

        if (answer == 1)
        {
            std::cout << "You got it correct!\n";
        }
        else 
        {
            std::cout <<"I'm sorry...\n";
        }

return 0;
}