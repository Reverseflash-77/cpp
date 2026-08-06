#include <iostream>
#include <string>

class Dog{
    public:
        std::string name;
        int age;
};

int main(){

    Dog rocky;
        rocky.name = "Rocky";
        rocky.age = 5;

        std::cout << "Dog name is " << rocky.name;

    return 0;
}