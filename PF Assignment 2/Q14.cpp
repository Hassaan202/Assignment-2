//#include <iostream>
//using namespace std;
//
//int main() {
//	int range, num=2, internalCount, prime=0, primePrevious=0, numDone=0;
//	bool primeFlag;
//
//
//	cout << "Enter the numbers to iterate upto: ";
//	cin >> range;
//
//	while (num <= range) {
//		primeFlag = true;
//		internalCount = 2;
//		while (internalCount <= (num / 2) && primeFlag == true) {
//			if (num % internalCount == 0) {
//				primeFlag = false;
//			}
//			internalCount++;
//		}
//		if (primeFlag == true) {			
//			primePrevious = prime;
//			prime = num;
//
//			if ((prime - primePrevious) == 2 && primePrevious !=0) {
//				cout << endl << primePrevious << " , " << prime << " are dual prime.";		
//				numDone = prime;//as this will be primePrevious in next iteration
//			}
//			else {
//				if (primePrevious != numDone) {
//					cout << endl << primePrevious << " is NOT  a dual prime";
//				}
//			}
//		}	
//
//		num++;
//	}
//
//	return 0;
//}