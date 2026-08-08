#include <iostream>
#include <string>

int main(){

    std::string tip1 = "🍎 Stay consistent: Even 10 minutes of daily practice adds up.";
    std::string tip2 = "✍️ Take notes: Writing things down helps concepts stick.";
    std::string tip3 = "🚀 Build small projects: Apply what you learn in simple, hands-on w=ays.";
    std::string tip4 = "👯 Join a community: Learning is easier (and way more fun) when you're not doing it alone.";

    std::string* ptr1 = &tip1;
    std::string* ptr2 = &tip2;
    std::string* ptr3 = &tip3;
    std::string* ptr4 = &tip4;

    std::cout << ptr1 << '\n';
    std::cout << ptr2 << '\n';
    std::cout << ptr3 << '\n';
    std::cout << ptr4 << '\n';

    std::cout << *ptr1 << '\n';
    std::cout << *ptr2 << '\n';
    std::cout << *ptr3 << '\n';
    std::cout << *ptr4 << '\n';

    return 0;
}
