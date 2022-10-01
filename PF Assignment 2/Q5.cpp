//#include <iostream>
//using namespace std;
//int main() {
//	char a, b, c, d, e, f, g;
//	int alphabetCount[26] = {}, count = 0;
//	bool flag = true;
//
//	cout << "Enter 7 alphabets(in upper case): ";
//	cin >> a >> b >> c >> d >> e >> f >> g;
//
//	if (a >= 65 && a <= 90) {
//		if (a == 'A') {
//			alphabetCount[0] += 1;
//		}
//		else if (a == 'B') {
//			alphabetCount[1] += 1;
//		}
//		else if (a == 'C') {
//			alphabetCount[2] += 1;
//		}
//		else if (a == 'D') {
//			alphabetCount[3] += 1;
//		}
//		else if (a == 'E') {
//			alphabetCount[4] += 1;
//		}
//		else if (a == 'F') {
//			alphabetCount[5] += 1;
//		}
//		else if (a == 'G') {
//			alphabetCount[6] += 1;
//		}
//		else if (a == 'H') {
//			alphabetCount[7] += 1;
//		}
//		else if (a == 'I') {
//			alphabetCount[8] += 1;
//		}
//		else if (a == 'J') {
//			alphabetCount[9] += 1;
//		}
//		else if (a == 'K') {
//			alphabetCount[10] += 1;
//		}
//		else if (a == 'L') {
//			alphabetCount[11] += 1;
//		}
//		else if (a == 'M') {
//			alphabetCount[12] += 1;
//		}
//		else if (a == 'N') {
//			alphabetCount[13] += 1;
//		}
//		else if (a == 'O') {
//			alphabetCount[14] += 1;
//		}
//		else if (a == 'P') {
//			alphabetCount[15] += 1;
//		}
//		else if (a == 'Q') {
//			alphabetCount[16] += 1;
//		}
//		else if (a == 'R') {
//			alphabetCount[17] += 1;
//		}
//		else if (a == 'S') {
//			alphabetCount[18] += 1;
//		}
//		else if (a == 'T') {
//			alphabetCount[19] += 1;
//		}
//		else if (a == 'U') {
//			alphabetCount[20] += 1;
//		}
//		else if (a == 'V') {
//			alphabetCount[21] += 1;
//		}
//		else if (a == 'W') {
//			alphabetCount[22] += 1;
//		}
//		else if (a == 'X') {
//			alphabetCount[23] += 1;
//		}
//		else if (a == 'Y') {
//			alphabetCount[24] += 1;
//		}
//		else if (a == 'Z') {
//			alphabetCount[25] += 1;
//		}
//	}
//	else {
//		flag = false;
//	}
//
//
//
//	if (b >= 65 && b <= 90) {
//		if (b == 'A') {
//			alphabetCount[0] += 1;
//		}
//		else if (b == 'B') {
//			alphabetCount[1] += 1;
//		}
//		else if (b == 'C') {
//			alphabetCount[2] += 1;
//		}
//		else if (b == 'D') {
//			alphabetCount[3] += 1;
//		}
//		else if (b == 'E') {
//			alphabetCount[4] += 1;
//		}
//		else if (b == 'F') {
//			alphabetCount[5] += 1;
//		}
//		else if (b == 'G') {
//			alphabetCount[6] += 1;
//		}
//		else if (b == 'H') {
//			alphabetCount[7] += 1;
//		}
//		else if (b == 'I') {
//			alphabetCount[8] += 1;
//		}
//		else if (b == 'J') {
//			alphabetCount[9] += 1;
//		}
//		else if (b == 'K') {
//			alphabetCount[10] += 1;
//		}
//		else if (b == 'L') {
//			alphabetCount[11] += 1;
//		}
//		else if (b == 'M') {
//			alphabetCount[12] += 1;
//		}
//		else if (b == 'N') {
//			alphabetCount[13] += 1;
//		}
//		else if (b == 'O') {
//			alphabetCount[14] += 1;
//		}
//		else if (b == 'P') {
//			alphabetCount[15] += 1;
//		}
//		else if (b == 'Q') {
//			alphabetCount[16] += 1;
//		}
//		else if (b == 'R') {
//			alphabetCount[17] += 1;
//		}
//		else if (b == 'S') {
//			alphabetCount[18] += 1;
//		}
//		else if (b == 'T') {
//			alphabetCount[19] += 1;
//		}
//		else if (b == 'U') {
//			alphabetCount[20] += 1;
//		}
//		else if (b == 'V') {
//			alphabetCount[21] += 1;
//		}
//		else if (b == 'W') {
//			alphabetCount[22] += 1;
//		}
//		else if (b == 'X') {
//			alphabetCount[23] += 1;
//		}
//		else if (b == 'Y') {
//			alphabetCount[24] += 1;
//		}
//		else if (b == 'Z') {
//			alphabetCount[25] += 1;
//		}
//	}
//	else {
//		flag = false;
//	}
//
//
//
//
//	if (c >= 65 && c <= 90) {
//		if (c == 'A') {
//			alphabetCount[0] += 1;
//		}
//		else if (c == 'B') {
//			alphabetCount[1] += 1;
//		}
//		else if (c == 'C') {
//			alphabetCount[2] += 1;
//		}
//		else if (c == 'D') {
//			alphabetCount[3] += 1;
//		}
//		else if (c == 'E') {
//			alphabetCount[4] += 1;
//		}
//		else if (c == 'F') {
//			alphabetCount[5] += 1;
//		}
//		else if (c == 'G') {
//			alphabetCount[6] += 1;
//		}
//		else if (c == 'H') {
//			alphabetCount[7] += 1;
//		}
//		else if (c == 'I') {
//			alphabetCount[8] += 1;
//		}
//		else if (c == 'J') {
//			alphabetCount[9] += 1;
//		}
//		else if (c == 'K') {
//			alphabetCount[10] += 1;
//		}
//		else if (c == 'L') {
//			alphabetCount[11] += 1;
//		}
//		else if (c == 'M') {
//			alphabetCount[12] += 1;
//		}
//		else if (c == 'N') {
//			alphabetCount[13] += 1;
//		}
//		else if (c == 'O') {
//			alphabetCount[14] += 1;
//		}
//		else if (c == 'P') {
//			alphabetCount[15] += 1;
//		}
//		else if (c == 'Q') {
//			alphabetCount[16] += 1;
//		}
//		else if (c == 'R') {
//			alphabetCount[17] += 1;
//		}
//		else if (c == 'S') {
//			alphabetCount[18] += 1;
//		}
//		else if (c == 'T') {
//			alphabetCount[19] += 1;
//		}
//		else if (c == 'U') {
//			alphabetCount[20] += 1;
//		}
//		else if (c == 'V') {
//			alphabetCount[21] += 1;
//		}
//		else if (c == 'W') {
//			alphabetCount[22] += 1;
//		}
//		else if (c == 'X') {
//			alphabetCount[23] += 1;
//		}
//		else if (c == 'Y') {
//			alphabetCount[24] += 1;
//		}
//		else if (c == 'Z') {
//			alphabetCount[25] += 1;
//		}
//	}
//	else {
//		flag = false;
//	}
//
//
//
//	if (d >= 65 && d <= 90) {
//		if (d == 'A') {
//			alphabetCount[0] += 1;
//		}
//		else if (d == 'B') {
//			alphabetCount[1] += 1;
//		}
//		else if (d == 'C') {
//			alphabetCount[2] += 1;
//		}
//		else if (d == 'D') {
//			alphabetCount[3] += 1;
//		}
//		else if (d == 'E') {
//			alphabetCount[4] += 1;
//		}
//		else if (d == 'F') {
//			alphabetCount[5] += 1;
//		}
//		else if (d == 'G') {
//			alphabetCount[6] += 1;
//		}
//		else if (d == 'H') {
//			alphabetCount[7] += 1;
//		}
//		else if (d == 'I') {
//			alphabetCount[8] += 1;
//		}
//		else if (d == 'J') {
//			alphabetCount[9] += 1;
//		}
//		else if (d == 'K') {
//			alphabetCount[10] += 1;
//		}
//		else if (d == 'L') {
//			alphabetCount[11] += 1;
//		}
//		else if (d == 'M') {
//			alphabetCount[12] += 1;
//		}
//		else if (d == 'N') {
//			alphabetCount[13] += 1;
//		}
//		else if (d == 'O') {
//			alphabetCount[14] += 1;
//		}
//		else if (d == 'P') {
//			alphabetCount[15] += 1;
//		}
//		else if (d == 'Q') {
//			alphabetCount[16] += 1;
//		}
//		else if (d == 'R') {
//			alphabetCount[17] += 1;
//		}
//		else if (d == 'S') {
//			alphabetCount[18] += 1;
//		}
//		else if (d == 'T') {
//			alphabetCount[19] += 1;
//		}
//		else if (d == 'U') {
//			alphabetCount[20] += 1;
//		}
//		else if (d == 'V') {
//			alphabetCount[21] += 1;
//		}
//		else if (d == 'W') {
//			alphabetCount[22] += 1;
//		}
//		else if (d == 'X') {
//			alphabetCount[23] += 1;
//		}
//		else if (d == 'Y') {
//			alphabetCount[24] += 1;
//		}
//		else if (d == 'Z') {
//			alphabetCount[25] += 1;
//		}
//	}
//	else {
//		flag = false;
//	}
//
//
//
//	if (e >= 65 && e <= 90) {
//		if (e == 'A') {
//			alphabetCount[0] += 1;
//		}
//		else if (e == 'B') {
//			alphabetCount[1] += 1;
//		}
//		else if (e == 'C') {
//			alphabetCount[2] += 1;
//		}
//		else if (e == 'D') {
//			alphabetCount[3] += 1;
//		}
//		else if (e == 'E') {
//			alphabetCount[4] += 1;
//		}
//		else if (e == 'F') {
//			alphabetCount[5] += 1;
//		}
//		else if (e == 'G') {
//			alphabetCount[6] += 1;
//		}
//		else if (e == 'H') {
//			alphabetCount[7] += 1;
//		}
//		else if (e == 'I') {
//			alphabetCount[8] += 1;
//		}
//		else if (e == 'J') {
//			alphabetCount[9] += 1;
//		}
//		else if (e == 'K') {
//			alphabetCount[10] += 1;
//		}
//		else if (e == 'L') {
//			alphabetCount[11] += 1;
//		}
//		else if (e == 'M') {
//			alphabetCount[12] += 1;
//		}
//		else if (e == 'N') {
//			alphabetCount[13] += 1;
//		}
//		else if (e == 'O') {
//			alphabetCount[14] += 1;
//		}
//		else if (e == 'P') {
//			alphabetCount[15] += 1;
//		}
//		else if (e == 'Q') {
//			alphabetCount[16] += 1;
//		}
//		else if (e == 'R') {
//			alphabetCount[17] += 1;
//		}
//		else if (e == 'S') {
//			alphabetCount[18] += 1;
//		}
//		else if (e == 'T') {
//			alphabetCount[19] += 1;
//		}
//		else if (e == 'U') {
//			alphabetCount[20] += 1;
//		}
//		else if (e == 'V') {
//			alphabetCount[21] += 1;
//		}
//		else if (e == 'W') {
//			alphabetCount[22] += 1;
//		}
//		else if (e == 'X') {
//			alphabetCount[23] += 1;
//		}
//		else if (e == 'Y') {
//			alphabetCount[24] += 1;
//		}
//		else if (e == 'Z') {
//			alphabetCount[25] += 1;
//		}
//	}
//	else {
//		flag = false;
//	}
//
//
//
//	if (f >= 65 && f <= 90) {
//		if (f == 'A') {
//			alphabetCount[0] += 1;
//		}
//		else if (f == 'B') {
//			alphabetCount[1] += 1;
//		}
//		else if (f == 'C') {
//			alphabetCount[2] += 1;
//		}
//		else if (f == 'D') {
//			alphabetCount[3] += 1;
//		}
//		else if (f == 'E') {
//			alphabetCount[4] += 1;
//		}
//		else if (f == 'F') {
//			alphabetCount[5] += 1;
//		}
//		else if (f == 'G') {
//			alphabetCount[6] += 1;
//		}
//		else if (f == 'H') {
//			alphabetCount[7] += 1;
//		}
//		else if (f == 'I') {
//			alphabetCount[8] += 1;
//		}
//		else if (f == 'J') {
//			alphabetCount[9] += 1;
//		}
//		else if (f == 'K') {
//			alphabetCount[10] += 1;
//		}
//		else if (f == 'L') {
//			alphabetCount[11] += 1;
//		}
//		else if (f == 'M') {
//			alphabetCount[12] += 1;
//		}
//		else if (f == 'N') {
//			alphabetCount[13] += 1;
//		}
//		else if (f == 'O') {
//			alphabetCount[14] += 1;
//		}
//		else if (f == 'P') {
//			alphabetCount[15] += 1;
//		}
//		else if (f == 'Q') {
//			alphabetCount[16] += 1;
//		}
//		else if (f == 'R') {
//			alphabetCount[17] += 1;
//		}
//		else if (f == 'S') {
//			alphabetCount[18] += 1;
//		}
//		else if (f == 'T') {
//			alphabetCount[19] += 1;
//		}
//		else if (f == 'U') {
//			alphabetCount[20] += 1;
//		}
//		else if (f == 'V') {
//			alphabetCount[21] += 1;
//		}
//		else if (f == 'W') {
//			alphabetCount[22] += 1;
//		}
//		else if (f == 'X') {
//			alphabetCount[23] += 1;
//		}
//		else if (f == 'Y') {
//			alphabetCount[24] += 1;
//		}
//		else if (f == 'Z') {
//			alphabetCount[25] += 1;
//		}
//	}
//	else {
//		flag = false;
//	}
//
//
//
//	if (g >= 65 && g <= 90) {
//		if (g == 'A') {
//			alphabetCount[0] += 1;
//		}
//		else if (g == 'B') {
//			alphabetCount[1] += 1;
//		}
//		else if (g == 'C') {
//			alphabetCount[2] += 1;
//		}
//		else if (g == 'D') {
//			alphabetCount[3] += 1;
//		}
//		else if (g == 'E') {
//			alphabetCount[4] += 1;
//		}
//		else if (g == 'F') {
//			alphabetCount[5] += 1;
//		}
//		else if (g == 'G') {
//			alphabetCount[6] += 1;
//		}
//		else if (g == 'H') {
//			alphabetCount[7] += 1;
//		}
//		else if (g == 'I') {
//			alphabetCount[8] += 1;
//		}
//		else if (g == 'J') {
//			alphabetCount[9] += 1;
//		}
//		else if (g == 'K') {
//			alphabetCount[10] += 1;
//		}
//		else if (g == 'L') {
//			alphabetCount[11] += 1;
//		}
//		else if (g == 'M') {
//			alphabetCount[12] += 1;
//		}
//		else if (g == 'N') {
//			alphabetCount[13] += 1;
//		}
//		else if (g == 'O') {
//			alphabetCount[14] += 1;
//		}
//		else if (g == 'P') {
//			alphabetCount[15] += 1;
//		}
//		else if (g == 'Q') {
//			alphabetCount[16] += 1;
//		}
//		else if (g == 'R') {
//			alphabetCount[17] += 1;
//		}
//		else if (g == 'S') {
//			alphabetCount[18] += 1;
//		}
//		else if (g == 'T') {
//			alphabetCount[19] += 1;
//		}
//		else if (g == 'U') {
//			alphabetCount[20] += 1;
//		}
//		else if (g == 'V') {
//			alphabetCount[21] += 1;
//		}
//		else if (g == 'W') {
//			alphabetCount[22] += 1;
//		}
//		else if (g == 'X') {
//			alphabetCount[23] += 1;
//		}
//		else if (g == 'Y') {
//			alphabetCount[24] += 1;
//		}
//		else if (g == 'Z') {
//			alphabetCount[25] += 1;
//		}
//	}	
//	else {
//		flag = false;
//	}
//
//
//	if (flag == true) {
//		while (count <= 25) {
//			if (alphabetCount[count] != 0) {
//				cout << alphabetCount[count] << " " << char(count + 65) << endl;
//			}
//			count++;
//		}
//	}
//	else {
//		cout << "Incorrect character entered.";
//	}
//
//	return 0;
//}