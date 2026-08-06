#include <iostream>
#include <string>

class Student{
    public:
        std::string name;
        int age;

    void introduce(){
        std::cout << "Hi I'm " << name << ",\tI'm " << age << " yo \n";
    }
    void study(int study_hour){
        std::cout << "I study " << study_hour << " hours per day\n";
    }
    void sleep(int sleep_hour){
        std::cout << "I sleep " << sleep_hour << " hours per day\n";
    }

};

int main(){

    Student Alice;
    Student Bob;

    Alice.name = "Alice";
    Alice.age = 18;
    Alice.introduce();
    Alice.study(8);
    Alice.sleep(5);

    std::cout << '\n';

    Bob.name = "Bob";
    Bob.age = 20;
    Bob.introduce();
    Bob.study(9);
    Bob.sleep(8);

    return 0;
}