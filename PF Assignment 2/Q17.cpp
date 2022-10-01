//#include <iostream>
//using namespace std;
//
//int main() {
//	float rateA, rateB;
//	int populationA, populationB, yearCount=0;
//	
//	cout << "Enter the population of town A: ";
//	cin >> populationA;
//	cout << "Enter the population growth rate of town A: ";
//	cin >> rateA;
//	cout << "Enter the population of town B: ";
//	cin >> populationB;
//	cout << "Enter the population growth rate of town B: ";
//	cin >> rateB;
//
//	while (populationA < populationB) {
//		populationA *= (1 + rateA/100);
//		populationB *= (1 + rateB/100);
//		yearCount++;
//	}
//	cout << "\nAfter " << yearCount << " years, the population of town A will be " << populationA << 
//		" and the population of town B will be " << populationB;
//	return 0;
//}