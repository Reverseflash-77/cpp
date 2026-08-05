#include <iostream>

void ooo_message(std::string returnDate){
    std::cout << R"(Thank you for your email.
I am currently out of the office and will be back )" << returnDate;
    std::cout << "\nI will respond as soon as I can upon my return.";
}

int main(){
    ooo_message("Wed, Aug 5");
    return 0;
}