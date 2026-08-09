#include <iostream>
#include <string>

void reviewAction(const std::string& name, const std::string* extraComment) {
	if (extraComment == nullptr) {
		std::cout << "Thanks for the review, " << name << "!\n";
	}
	else {
		std::cout << "Thanks for the review, " << name 
			<< "! the team will get back to you.\n";
	}
}

int main(){
	 
	reviewAction("Brian", nullptr);

	std::string comment = "The food was delicious!";
	reviewAction("Brian", &comment);

	return 0;

}
