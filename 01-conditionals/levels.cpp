#include <iostream>

int main()
{
     int level = 7;
      
     if (level <= 5)
     {
          std::cout << "🥉 Bronze";
     }
     else if (level <= 10)
     {
          std::cout << "🥈 Silver";
     }
     else if (level <= 15)
     {
          std::cout << "🥇 Gold";
     }
     else if (level <= 20)
     {
          std::cout << "🏅 Platinum";
     }
     else
     {
          std::cout << "💎 Diamond";
     }

}