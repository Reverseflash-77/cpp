#include <iostream>
#include <string>

class BankAccount{

    public:
        std::string name;
        int account_id;
        std::string account_type;
        double balance;

        double deposit(double deposit_money){
             balance += deposit_money;

             return balance;
        }
        double withdraw(double withdraw_money){
            balance -= withdraw_money;

            return balance;
        }
        void display_balance(){
            std::cout << "Your balance is $"
                      << balance;
        }
};

int main(){

    BankAccount reverseFlash;
    
    reverseFlash.name = "Reverse Flash";
    reverseFlash.account_id = 1234;
    reverseFlash.account_type = "Savings";
    reverseFlash.balance = 12500.75;

    reverseFlash.deposit(96);
    reverseFlash.withdraw(25);
    reverseFlash.display_balance();

    return 0;
}