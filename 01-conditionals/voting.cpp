#include <iostream>
int main()
{
     int age = 18;
     bool citizen = true;
     bool registered = true;
      
      if (age >= 18 && citizen&& registered)
      {
          std::cout<<"You can vote!";
      }
	 else if (age < 18)
	 {
	     std::cout<<"You are not old enough to vote.";
	 }
	 else if (!citizen )
	 {
	     std::cout<<"You are not eligible to vote.";
	 }
	 else if (!registered)
	 {
	     std::cout<<"You need to register first.";
	 }
	 else
	 {
	     std::cout<<"You have not met the requirements.";
	 }
}