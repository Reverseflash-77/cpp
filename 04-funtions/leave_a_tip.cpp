#include <iostream>

void tips_menu() {
    std::cout << R"(
Leave a tip?

==========================
15%   20%   25%
==========================

Enter tip percentage:
)";
}

double tip_amount() {
    double tip;
    std::cin >> tip;
    return tip;
}

double tips_calculator(double bill, double percentage) {
    return (bill * percentage) / 100;
}

double share_bill(double total, int people) {
    return total / people;
}

int main() {

    const double bill = 100;

    tips_menu();

    double tip = tip_amount();

    double tipValue = tips_calculator(bill, tip);

    double total = bill + tipValue;

    std::cout << "Tip: " << tipValue << '\n';
    std::cout << "Total Bill: " << total << '\n';
    std::cout << "Each person pays: " << share_bill(total, 5) << '\n';

    return 0;
}