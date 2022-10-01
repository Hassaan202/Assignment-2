#include <iostream>
using namespace std;

int main() {
	long num, numRem, div=2, index=2;
	bool primeFlag = true;
	
	cout << "Enter a positive integer:";
	cin >> num;	
	numRem = num;

	if (num > 1) {
		cout << "\nThe prime factors of the number are: ";
		while (index <= num && numRem !=0) { 
			//as the prime factor cannot be greater than half the number
			div = 2;
			primeFlag = true;
			while (div <= (index / 2) && primeFlag == true) {
				if (index % div == 0) {
					primeFlag = false;
				}
				div++;
			}
			if (primeFlag == true) {				
				while (numRem % index == 0) {
					numRem = numRem / index;
					if (numRem == 1) {
						cout << index;
					}
					else {
						cout << index << " x ";
					}
				}				
			}
			index++;
		}
	}
	else {
		cout << "\nInvalid number entered!";
	}


	return 0;
}