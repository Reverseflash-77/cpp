#include <iostream>
#include <string>

void displayMsg(const std::string msg = "Decide. Commit. Succeed", char symbol = ' ' , int number = 10){
	for (int i = 0; i < number ; i++){
      		std::cout << symbol;
	}
	std::cout << msg;
	for (int i = 0; i < number ; i++){
      		std::cout << symbol;
	}
	std::cout << std::endl;
}

int main(){
	displayMsg("I will Decide", '*', 15);
	displayMsg("I will Commit", '+');
	displayMsg("Succeed");
	displayMsg();

  return 0;
}
