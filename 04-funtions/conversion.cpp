#include <iostream>

double fahrenheit(double celsius){
            return ((9*celsius)/5) + 32;
}

double kilometer(double miles){
            return miles*1.60934;
}
double jpy(double usd){
    return usd*158;
}
double second_per_hour(double bmp){
    return 60/bmp;
}

int main(){
    std::cout << fahrenheit(25) <<  '\n' << kilometer(34) <<  '\n' << jpy(45) << '\n' << second_per_hour(77);

    return 0;
}