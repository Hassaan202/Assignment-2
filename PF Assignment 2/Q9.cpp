//#include <iostream>
//using namespace std;
//
//int main(){
//	int package, hoursUsed, extraHours = 0, extraRate=0;
//	float totalAmount, monthlyRate;
//
//	cout << "Enter the package purchased(A=1, B=2, C=3): ";
//	cin >> (package);		
//	if (package == 1 || package == 2 || package == 3) {
//		cout << "Enter the number of hours used:";
//		cin >> hoursUsed;
//		if (hoursUsed >= 0 && hoursUsed <= 744) {
//			if (package == 1) {				
//				if (hoursUsed > 10) {
//					extraHours = hoursUsed - 10;
//				}
//				monthlyRate = 0.99;
//				extraRate = 2.00;
//			}
//			else if (package == 2) {
//				if (hoursUsed > 20) {
//					extraHours = hoursUsed - 20;
//				}
//				monthlyRate = 14.95;
//				extraRate = 1.00;
//			}
//			else {
//				monthlyRate = 19.95;
//			}
//			totalAmount = (monthlyRate)+(extraHours * extraRate);
//			cout << "\nThe total amount due is $" << totalAmount;
//		}
//		else {
//			cout << "\nThe hours entered is out of bounds.";
//		}
//	}
//	else {
//		cout << "\nIncorrect package entered!";
//	}
//	return 0;
//}