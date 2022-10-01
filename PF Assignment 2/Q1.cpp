//#include <iostream>
//#include <math.h>
//using namespace std;
//int main() {
//	int a, b, c;
//	float discriminant;
//	float root1, root2;
//
//	cout << "The standard quadratic equation is given by (ax^2 + bx + c)";
//	cout << "\nEnter the value of a (coefficient of x^2):";
//	cin >> a;
//	cout << "\nEnter the value of b (coefficient of x):";
//	cin >> b;
//	cout << "\nEnter the value of c:";
//	cin >> c;
//	discriminant = (b * b) - (4 * a * c);
//	if (discriminant > 0) {
//		cout << "\nThe equation has two real roots.";
//		root1 = (-b + sqrt(discriminant)) / 2 * a;
//		root2 = (-b - sqrt(discriminant)) / 2 * a;
//		cout << "\nx = " << root1 << " , " << root2;
//	}
//	else if (discriminant == 0) {
//		cout << "\nThe equation has repeated roots.";
//		root1 = (-b + sqrt(discriminant)) / 2 * a;
//		root2 = (-b - sqrt(discriminant)) / 2 * a;
//		cout << "\nx = " << root1 << " , " << root2;
//	}
//	else {
//		cout << "\nThe equation has two complex roots.";
//	}
//
//	system("pause");
//	return 0;
//}