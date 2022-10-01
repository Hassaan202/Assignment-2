//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//	int dishCode,dishQuantity,currency,mealPrice;
//	int prices[5] = {1800,2000,2200,500,2500};
//	//array indexc begins from 0
//	float salesTax, salesTaxAmount, totalPrice;
//	const float EURO = 235.83, USD = 239.99 ;
//	//Menu display
//	cout << left << setw(10) << "Code" << setw(20) << "Meal" << setw(20) << "per kg price in pkr" << endl
//		<< setfill('_') << setw(49) << "_" << endl << setfill(' ')
//		<< left << setw(10) << "1" << setw(20) << "Fire Hot Steak" << setw(15) << "1800" << endl
//		<< left << setw(10) << "2" << setw(20) << "Sole Meuniere" << setw(15) << "2000" << endl
//		<< left << setw(10) << "3" << setw(20) << "Texas Barbecue" << setw(15) << "2200" << endl
//		<< left << setw(10) << "4" << setw(20) << "Maxican Corn Salad " << setw(15) << "500" << endl
//		<< left << setw(10) << "5" << setw(20) << "Creamy Mushroom" << setw(15) << "2500" << endl;
//
//	cout << "\n\nEnter the meal code:";
//	cin >> dishCode;
//	if (dishCode > 0 && dishCode < 6) {
//		cout << "Enter the dish quantity in kilograms: ";
//		cin >> dishQuantity;
//		if (dishQuantity > 0) {
//			cout << "Enter the currency for payment(1 for Pakistani rupee, 2 for euro, and 3 for dollar.) ";
//			cin >> currency;
//			if (currency >= 1 && currency <= 3) {
//				mealPrice = prices[dishCode - 1] * dishQuantity;
//				if (mealPrice <= 1000) {
//					salesTax = 0;
//				}
//				else if (mealPrice > 1000 && mealPrice <= 3000) {
//					salesTax = 0.02;
//				}
//				else {
//					salesTax = 0.05;
//				}
//				salesTaxAmount = mealPrice * salesTax;
//				totalPrice = mealPrice + salesTaxAmount;
//				if (currency == 1) {
//					cout << endl << setw(25) << "Meal Price: " << mealPrice;
//					cout << endl << setw(25) << "Sales Tax: " << salesTaxAmount;
//					cout << endl << setw(25) << "Total Amount payable: " << totalPrice;
//				}
//				else if (currency == 2) {
//					cout << endl << setw(25) << "Meal Price: " << mealPrice/EURO;
//					cout << endl << setw(25) << "Sales Tax: " << salesTaxAmount/EURO;
//					cout << endl << setw(25) << "Total Amount payable: " << totalPrice/EURO;
//				}
//				else {
//					cout << endl << setw(25) << "Meal Price: " << mealPrice / USD;
//					cout << endl << setw(25) << "Sales Tax: " << salesTaxAmount / USD;
//					cout << endl << setw(25) << "Total Amount payable: " << totalPrice / USD;
//				}
//			}
//			else {
//				cout << "Invalid currency entered.";
//			}
//		}
//		else {
//			cout << "Error! dish quantity must be greater than 0 kilograms.";
//		}
//	}
//	else {
//		cout << "Invalid dish code.";
//	}
//
//	return 0;
//}