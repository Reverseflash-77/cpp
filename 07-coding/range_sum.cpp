#include <iostream>
#include <vector>

int main(){
	std::vector<int> a{5,8,2,6,4};
	
	int sum = 0;
	for ( int i = 1 ; i <= 3 ; i++){
		sum += a[i];
	}

	std::cout << sum;
}
