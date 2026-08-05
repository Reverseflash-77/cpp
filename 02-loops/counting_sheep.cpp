#include <iostream>

int main()
{
    const int number = 50;
    const std::string animal = "Sheep";

    for (int i = 1; i <= number ; i++)
    {
        std::cout << i << ". " << animal << '\n';
    }
    std::cout << "😴💭";
    return 0;
}