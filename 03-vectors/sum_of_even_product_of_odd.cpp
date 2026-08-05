#include <iostream>
#include <vector>

int main(){
    
    std::vector<int> number{2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
    int sum_even = 0;
    int porduct_odd = 1;

    for (int i = 0; i < number.size(); i++){
            if (number[i] % 2 == 0){
                sum_even += number[i];
            }else {
                porduct_odd *= number[i];
            }
    }

    return 0;
}