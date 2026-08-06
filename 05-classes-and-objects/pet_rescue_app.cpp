#include <iostream>
#include <string>

class Cat{
    public:
    std::string name;
    std::string breed;
    int age;
    bool rescued;
    double mood;
    double hunger;

    Cat(std::string n, std::string b, int a, bool r, double m, double h){
        name = n;
        breed = b;
        age = a;
        rescued = r;
        mood = m;
        hunger = h;
    }
    void feed(){
        hunger = hunger + 1;
    }
    void play(){
        mood = mood + 1;
    }
    void status(){
        std::cout << "The name of the cat is " << name
                  << " ,its breed is " << breed
                  << " ,its age is " << age
                  << " ,its mood now is " << mood
                  << " and its hunger is " << hunger;
    }
};

int main(){

    Cat tom("Tom", "Domestic Shorthair", 10, true , 5, 6);
    tom.play();
    tom.feed();
    tom.status();
    
    return 0;
}