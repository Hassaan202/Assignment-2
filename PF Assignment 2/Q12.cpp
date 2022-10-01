//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	const float Po = 20 * pow(10, -6);
//	float L=0, value, choice;
//	
//	cout << "Press 1 for decibals and 2 for pascals: ";
//	cin >> choice;
//
//	if (choice == 1 || choice == 2) {
//		cout << "\nEnter the value: ";
//		cin >> value;
//		if (choice == 1) {
//			L = value;
//		}
//		else {
//			L = 20 * log10(value / Po);
//		}
//		if (L <= 15) {
//			cout << "Light leaf rustling.";
//		}
//		else if (L > 15 && L <= 45) {
//			cout << "Calm Library.";
//		}
//		else if (L > 45 && L <= 75) {
//			cout << "Normal converation.";
//		}
//		else if (L > 75 && L <= 95) {
//			cout << "Traffic on a busy roadway at 10 m.";
//		}
//		else if (L > 95 && L <= 110) {
//			cout << "Jack Hammer at 1 m.";
//		}
//		else if (L > 110 && L <= 125) {
//			cout << "Possible Haering Damage.";
//		}
//		else {
//			cout << "Threshold of pain.";
//		}
//	}
//	else {
//		cout << "\nIncorrect option selected.";
//	}
//
//	return 0;
//}