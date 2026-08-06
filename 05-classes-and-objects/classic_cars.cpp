#include <iostream>
#include <string>

class Car{
    public:
        std::string brand = "Car name";
        std::string model = "Model name";
        int year = 1900;
        bool classic = false;

        Car(std::string b, std::string m, int y, bool c){
            brand = b;
            model = m;
            year = y;
            classic = c;
    }

    void displayInfo(){
        std::cout << year << " " << brand << " " << model;
    }

};

int main(){

    Car ford("Ford", "Mustang", 1965, true);
    Car jaguar("Jaguar", "E-Type", 1961,true);

    ford.displayInfo();
    jaguar.displayInfo();

    return 0;
}