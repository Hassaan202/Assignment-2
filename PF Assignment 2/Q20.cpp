//#include <iostream>
//#include <cctype>
//using namespace std;
//
//int main() {
//	int numSteps, count = 1, x=0, y=0;
//	float sqDistance;
//	char direction;
//
//	cout << "Enter the number of steps taken: ";
//	cin >> numSteps;
//
//	if (numSteps > 0) {
//		cout << "Four directions are: North(N), South(S), West(W), East(E).";
//		while (count <= numSteps) {
//			cout << "\nEnter the direction of step " << count << ": ";
//			cin >> (direction);
//			direction = toupper(direction);
//			while (direction != 'N' && direction != 'E' && direction != 'W' && direction != 'S') {
//				cout << "\nEnter the correct direction:";
//				cin >> direction;
//			}
//			if (direction == 'N') {
//				y += 1;
//			}
//			else if (direction == 'E') {
//				x += 1;
//			}
//			else if (direction == 'W') {
//				x -= 1;
//			}
//			else if (direction == 'S') {
//				y -= 1;
//			}
//			cout << "(" << x << "," << y << ").";
//			count++;
//		}
//		sqDistance = (x * x) + (y * y);
//		cout << "\nSquared distance = " << sqDistance;
//	}
//	else {
//		cout << "\nInvalid number of steps entered.";
//	}
//	return 0;
//}