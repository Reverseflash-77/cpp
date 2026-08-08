#include <iostream>
#include <string>

int main(){

    int graduationYear = 2026;
    double worstGrade = 48.5;
    char schoolGrade = 'A';
    std::string elementrySchool = "Achievers Academy";

    std::cout << "graduationYear: " << &graduationYear << '\n';
    std::cout << "worstGrade: " << &worstGrade << '\n';
    std::cout << "schoolGrade: " << &schoolGrade << '\n';
    std::cout << "elementrySchool: " << &elementrySchool << '\n';

    return 0;
}