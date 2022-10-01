//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	int gasCode, time;
//	float distance, speed[4] = {258.0,331.5,972.0,1270.0};
//
//	cout << left << setw(7) << "Code" << setw(15) << "Medium" << setw(10) << "Speed(m/s)" << endl
//         << setfill('-') << setw(31) << "-" << setfill(' ') << endl
//		 << setw(7) << "1" << setw(15) << "Carbon Dioxide" << setw(10) << "258.0" << endl
//		 << setw(7) << "2" << setw(15) << "Air" << setw(10) << "331.5" << endl
//		 << setw(7) << "3" << setw(15) << "Helium" << setw(10) << "972.0" << endl
//		 << setw(7) << "4" << setw(15) << "Hydrogen" << setw(10) << "1270.0" << endl;
//
//	cout << "\n\nChoose the gas by entering appropriate number: ";
//	cin >> gasCode;
//	if (gasCode >= 1 && gasCode <= 4) {
//		cout << "\nEnter the time sound took to travel(0 - 30 seconds): ";
//		cin >> time;
//		if (time >= 0 && time <= 30) {
//			distance = speed[gasCode - 1] * time;
//			cout << "\nThe distance travelled is " << distance << " meters.";
//		}
//		else {
//			cout << "\nTime entered outside the range:";
//		}
//	}
//	else {
//		cout << "\nInvalid gas code entered.";
//	}
//	return 0;
//}