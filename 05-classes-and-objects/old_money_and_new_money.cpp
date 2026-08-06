#include <iostream>
#include <string>

class WealthyFamily{
    public:
        std::string name;
        int networth;
};

int main(){

    WealthyFamily pauls;

    pauls.name = "The Paul Brother";
    pauls.networth = 2500000;

     std::cout << pauls.name << ":\n";
     std::cout << "We are worth $" << pauls.networth << "!\n";

    return 0;
}