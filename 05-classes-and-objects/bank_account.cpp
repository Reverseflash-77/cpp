#include <iostream>
#include <string>
#include <format>

class BankAccount{
    public:
        std::string owner;
        double balance;
};

int main(){

    BankAccount reverseFlash;
    BankAccount flash;

    reverseFlash.owner = "Reverse Flash";
    reverseFlash.balance = 12500.75;

    flash.owner = "Flash";
    flash.balance = 0.00;

    std::cout << std::format(R"(
Owner: {}
Balance: ₹{}

Owner: {}
Balance: ₹{}

Revere Flash: Hahahahahaha, I'm always one step ahead.
)",reverseFlash.owner,reverseFlash.balance, flash.owner,flash.balance);

    return 0;
}