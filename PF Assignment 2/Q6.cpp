//#include <iostream>
//using namespace std;
//
////special day check for months with less than 31 days
//
//int main() {
//	int day, month, year;
//	bool dayFlag = true;
//
//	    cout << "Enter the day number:";
//		cin >> day;
//		cout << "Enter the month number:";
//		cin >> month;
//		cout << "Enter the year:";
//		cin >> year;
//		
//		if (year > 0 && year < 10000) {
//			if (month > 0 && month <= 12) {
//				if (day > 0 && day <= 31) {
//					day += 1;
//
//					if (month == 1) {
//						if (day == 32) {
//							month += 1;
//							day = 1;
//						}
//					}
//					else if (month == 2) {
//						if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//							if (day == 30) {
//								month += 1;
//								day = 1;
//							}
//							else if (day > 30) {
//								dayFlag = false;
//							}
//						}
//						else {
//							if (day == 29) {
//								month += 1;
//								day = 1;
//							}						
//							else if (day > 29) {
//								dayFlag = false;
//							}
//						}
//					}
//					else if (month == 3) {
//						if (day == 32) {
//							month += 1;
//							day = 1;
//						}
//					}
//					else if (month == 4) {
//						if (day == 31) {
//							month += 1;
//							day = 1;
//						}
//						else if (day > 31) {
//							dayFlag = false;
//						}
//					}
//					else if (month == 5) {
//						if (day == 32) {
//							month += 1;
//							day = 1;
//						}
//					}
//					else if (month == 6) {
//						if (day == 31) {
//							month += 1;
//							day = 1;
//						}
//						else if (day > 31) {
//							dayFlag = false;
//						}
//					}
//					else if (month == 7) {
//							if (day == 32) {
//								month += 1;
//								day = 1;
//							}
//						}
//					else if (month == 8) {
//						if (day == 32) {
//							month += 1;
//							day = 1;
//						}
//					}
//					else if (month == 9) {
//						if (day == 31) {
//							month += 1;
//							day = 1;
//						}
//						else if (day > 31) {
//							dayFlag = false;
//						}
//					}
//					else if (month == 10) {
//						if (day == 32) {
//							month += 1;
//							day = 1;
//						}
//					}
//					else if (month == 11) {
//						if (day == 31) {
//							month += 1;
//							day = 1;
//						}
//						else if (day > 31) {
//							dayFlag = false;
//						}
//					}
//					else if (month == 12) {
//							if (day == 32) {
//								month = 1;
//								day = 1;
//								year += 1;
//							}
//					}
//
//					if (dayFlag == true) {
//						cout << "\nThe next date is:\n";
//						cout << day << "/" << month << "/" << year;
//					}
//					else {
//						cout << "Incorrect day entered for the month entered.";
//					}
//
//				}
//			    else {
//  				cout << "Invalid day!";
//				}
//			}
//			else {
//				cout << "Invalid month!";
//			}
//		}
//		else {
//		    cout << "Invalid year!";
//		}
//
//	return 0;
//}
