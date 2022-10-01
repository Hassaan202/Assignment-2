//#include <iostream>
//using namespace std;
//
//int main() {
//	int num,numCounter, digit, sum=0, digitSum;
//
//	cout << "Enter the number to check whether it is a strong number: ";
//	cin >> num;
//	numCounter = num;
//
//	while (numCounter> 0) {
//		digit = numCounter % 10;		
//		digitSum = 1;
//  // factorial calculation 
//		while (digit > 0) {
//			digitSum = digitSum *digit;
//			digit--;
//		}
//		numCounter = numCounter / 10;
//		sum += digitSum;	
//	}
//	if (sum == num) {
//		cout << num << " is a strong number.";
//	}
//	else {
//		cout << num << " is a NOT a strong number.";
//	}
//	return 0;
//}