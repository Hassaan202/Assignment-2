//#include <iostream>
//using namespace std;
//
//int main() {
//	int numYears, monthlyRain, totalRain=0, yearCount=1, monthCount;
//	
//	cout << "Enter the number of years:";
//	cin >> numYears;
//	if (numYears >= 1) {
//		while (yearCount <= numYears) {
//			monthCount = 1;
//			while (monthCount <= 12) {			
//				cout << "Enter the rainfall for month " << monthCount << "(in inches): ";
//				cin >> monthlyRain;
//				while (monthlyRain < 0) {
//					cout << "ENTER A POSITIVE VALUE!!!";
//					cout << "Enter the rainfall for month " << monthCount << "(in inches): ";
//					cin >> monthlyRain;
//				}
//				totalRain += monthlyRain;
//				monthCount++;
//			}
//			yearCount++;
//		}
//		cout << "\nThe data collected is for " << numYears * 12 << " months"
//			 << "\nThe total rainfall is " << totalRain << " inches"
//			 << "\nThe average rainfall per month is " << (float)totalRain/(numYears*12) << " inches";
//	}
//	else {
//		cout << "\nInvalid number of years entered";
//	}
//
//	return 0;
//}