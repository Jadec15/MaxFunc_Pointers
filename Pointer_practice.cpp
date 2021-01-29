#include <iostream>
int max(int* p);

int main(void) {

	int numbers[6], i, temp = 0, *p; 
	
	
	for (i = 0; i <= 5; i++) {
		std::cout << "Input a number: ";
		std::cin >> numbers[i];
	} 
	p = numbers;
	temp = max(p);
	
	std::cout << "This is the max entered number: " << temp;
}

int max(int *p) {
	int temp = 0;
	for (int i = 0; i <= 5; i++) {
		if (temp <= p[i]) {
			temp = p[i];
		}
	}
	return temp;
}

