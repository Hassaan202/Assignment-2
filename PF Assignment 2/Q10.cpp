//#include <iostream>
//# include <cctype>
//using namespace std;
//
//int main() {
//	int package, hoursUsed, extraHoursA = 0,extraHoursB=0, extraRateA = 2,extraRateB=1;
//	float totalAmountA,totalAmountB,totalAmountC, monthlyRateA=0.99,monthlyRateB=14.95,monthlyRateC=19.95;
//
//	cout << "Enter the package purchased(A=1, B=2, C=3): ";
//	cin >> (package);
//	if (package == 1 || package == 2 || package == 3) {
//		cout << "Enter the number of hours used:";
//		cin >> hoursUsed;
//		if (hoursUsed >= 0 && hoursUsed <= 744) {
//				
//			if (hoursUsed > 10) {
//					extraHoursA = hoursUsed - 10;
//				}
//			totalAmountA = (monthlyRateA)+(extraHoursA * extraRateA);
//
//			if (hoursUsed > 20) {
//				extraHoursB = hoursUsed - 20;
//			}
//			totalAmountB = (monthlyRateB)+(extraHoursB * extraRateB);
//			
//			totalAmountC = (monthlyRateC);
//
//			if (package == 1) {				
//				cout << "\nThe total amount due is $" << totalAmountA;
//				if (totalAmountA > totalAmountB) {
//					cout << "\nBy subscripton of package B, you could have saved $" << totalAmountA - totalAmountB;
//					//if A is more expensive than B, it is automatically more expensive than c
//					cout << "\nBy subscripton of package C, you could have saved $" << totalAmountA - totalAmountC;
//				}
//			}
//			else if (package == 2) {
//				cout << "\nThe total amount due is $" << totalAmountB;
//				if (totalAmountB > totalAmountC) {					
//					cout << "\nBy subscripton of package C, you could have saved $" << totalAmountB - totalAmountC;
//				}
//			}
//			else {
//				cout << "\nThe total amount due is $" << totalAmountC;
//			}
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