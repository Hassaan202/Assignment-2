//#include <iostream>
//using namespace std;
//int main() {
//	int accountAmount, withdrawAmount, withdrawLimit;
//	int num500, num1000, num5000, temp;
//	cout << "Enter the money available in your bank account:";
//	cin >> accountAmount;
//	cout << "Enter your daily withdraw limit:";
//	cin >> withdrawLimit;
//	cout << "Enter the amount that you want to withdraw(multiple of 500):";
//	cin >> withdrawAmount;
//	if (withdrawAmount <= accountAmount){
//		if (withdrawAmount <= withdrawLimit) {
//			if (withdrawAmount % 500 == 0) {
//				num5000 = withdrawAmount / 5000;
//				temp = withdrawAmount % 5000;
//				num1000 = temp / 1000;
//				temp = temp % 1000;
//				num500 = temp / 500;
//				cout << "\n500 Rs. notes:" << num500
//					<< "\n1000 Rs. notes:" << num1000
//					<< "\n5000 Rs. notes:" << num5000;
//			}
//			else {
//				cout << "Error! The amount entered is not a multiple of 500.";
//			}
//		}
//		else {
//			cout << "Failure! The amount exceeds the daily limit.";
//		}
//	}
//	else {
//		cout << "Failure! Insufficient balance.";
//	}	
//		return 0;
//}