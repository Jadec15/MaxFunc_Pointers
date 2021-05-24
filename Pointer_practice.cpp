#include <iostream>
int max(int* p); //declare max function

int main(void) {

	int numbers[6], i, temp = 0, *p; 
	
	
	for (i = 0; i <= 5; i++) { //ask user for 6 numbers
		std::cout << "Input a number: ";
		std::cin >> numbers[i]; //input user numbers into an array 
	} 
	p = numbers; //p points to numbers array
	temp = max(p); //temp is the max of the array 
	
	std::cout << "This is the max entered number: " << temp;
}

int max(int *p) { //take in a pointer
	int temp = 0;
	for (int i = 0; i <= 5; i++) { //for each number store highest in temp
		if (temp <= p[i]) {
			temp = p[i];
		}
	}
	return temp; //return highest number
}

