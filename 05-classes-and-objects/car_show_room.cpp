#include <iostream>
#include <string>
#include <format>

class Car{
    public:
        std::string brand;
        std::string model;
        int year;

};

int main(){

    Car myCar;
    Car friendCar;

    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2023;

    friendCar.brand = "Honda";
    friendCar.model = "Civic";
    friendCar.year = 2022;

    std::cout << std::format(R"(
My Car
Brand: {}
Model: {}
Year : {}

Friend's Car
Brand: {}
Model: {}
Year : {}
)", myCar.brand,myCar.model,myCar.year, friendCar.brand,friendCar.model,friendCar.year);

    return 0;
}