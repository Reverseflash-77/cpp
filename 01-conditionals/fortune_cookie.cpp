#include <iostream>
#include <cstdlib>
int main()
{
     srand(time(NULL));
     int fortune = std::rand()%6;
     int lucky_number_1 = std::rand()%51;
     int lucky_number_2 = std::rand()%51;
     int lucky_number_3 = std::rand()%51;
     int lucky_number_4 = std::rand()%51;
     int lucky_number_5 = std::rand()%51;
     int lucky_number_6 = std::rand()%51;
     if (fortune == 0)
     {
         std::cout << "Don't pursue happiness – create it.";
     }
     else if (fortune==1)
     {
         std::cout << "The fortune you search for is in another cookie.";
     }
     else if (fortune==2)
     {
         std::cout << "All things are difficult before they are easy.";
     }
     else if (fortune==3)
     {
         std::cout << "The early bird gets the worm, but the second mouse gets the cheese.";
     }
     else if (fortune==4)
     {
         std::cout << "Someone in your life needs a letter from you.";
     }
     else
     {
         std::cout << "Help! I'm being held prisoner in a Chinese bakery!";
     }
     std::cout << "\nLucky numbers:" << "\t" << lucky_number_1 << "\t"<< lucky_number_2 << "\t"<< lucky_number_3 << "\t"<< lucky_number_4 << "\t"<< lucky_number_5 <<  "\t" << lucky_number_6 ;
}
