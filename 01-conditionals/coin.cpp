#include <iostream>
#include  <cstdlib>

int main()
{
    srand(time(NULL));
     
    int number = std::rand()%2;
     
    if (number ==1) 
    {
     std::cout << "Heads\n" ;
    }
     else
     {
     std::cout << "Tails\n";
     }
}