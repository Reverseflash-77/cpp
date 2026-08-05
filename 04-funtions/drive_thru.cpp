#include <iostream>

void welcome(){
    std::cout << R"(
Welcome to Sonnyboy's Diner!

Here's the menu:
1. 🍔 Cheeseburger
2. 🍟 Fries
3. 🥤 Soda
4. 🍦 Ice Cream
5. 🍪 Cookie
    )";
}
int main(){

welcome();

return 0;
}