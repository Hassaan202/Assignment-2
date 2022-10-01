//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	float cost[4] = {0.1, 0.055, 0.04, 0.03};
//	int  minSheets=0, sheets2=0,sheets3=0,sheets4=0;
//	float amount1=0, amount2=0, amount3=0, amount4=0;
//
//	cout << "Enter the least amount of sheets you need to buy: ";
//	cin >> minSheets;
//
//	if (minSheets > 0) {
//
//		amount1 = minSheets * cost[0];
//
//		
//			if (minSheets % 100 == 0) {
//				amount2 = minSheets * cost[1];
//				sheets2 = minSheets;
//			}
//		    else {
//				sheets2 = ((minSheets / 100) + 1) * 100;
//				amount2 = sheets2 * cost[1];
//			}
//
//		
//			if (minSheets % 500 == 0) {
//				amount3 = minSheets * cost[2];
//				sheets3 = minSheets;
//			}
//		    else {
//				sheets3 = ((minSheets / 500) + 1) * 500;
//				amount3 = sheets3 * cost[2];
//			}		
//
//			if (minSheets % 1000 == 0) {
//				amount4 = minSheets * cost[3];
//				sheets4 = minSheets;
//			}
//		    else {
//				sheets4 = ((minSheets / 1000) + 1) * 1000;
//				amount4 = sheets4 * cost[3];
//			}
//		
//	}
//	cout << "\nThe best package is: ";
//
//	if (amount1 < amount2) {
//		if (amount1 < amount3) {
//			if (amount1 < amount4) {
//				cout << "\nBuying " << minSheets << " single sheets." << " Total cost is $ " << amount1;
//			}
//			else {
//				cout << "\nBuying " << sheets4/1000 << " packages of 1000 sheets each." << " Total cost is $ " << amount4;
//			}
//		}
//		else {
//			if (amount3 < amount4) {
//				cout << "\nBuying " << sheets3 / 500 << " packages of 500 sheets each." << " Total cost is $" << amount3;
//			}
//			else {
//				cout << "\nBuying " << sheets4 / 1000 << " packages of 1000 sheets each." << " Total cost is $ " << amount4;
//			}
//		}
//	}
//	else {
//		if (amount2 < amount3) {
//			if (amount2 < amount4) {
//				cout << "\nBuying " << sheets2 / 100 << " packages of 100 sheets each." << " Total cost is $ " << amount2;
//
//			}
//			else {
//				cout << "\nBuying " << sheets4 / 1000 << " packages of 1000 sheets each." << " Total cost is $" << amount4;
//			}
//		}
//		else {
//			if (amount3 < amount4) {
//				cout << "\nBuying " << sheets3 / 500 << " packages of 500 sheets each." << " Total cost is $ " << amount3;
//			}
//			else {
//				cout << "\nBuying " << sheets4 / 1000 << " packages of 1000 sheets each." << " Total cost is $ " << amount4;
//			}
//		}
//	}    
//	return 0;
//}