#include <iostream>
using namespace std;

int main() {
	int day, month, year;
	int monthDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	const int YEAR1 = 2020, MONTH1 = 10, DAY1 = 4;
	int dayDifference, yearDifference, extraDays, totalMDays = 0, countMonth = 0, yearCount = 0, extraLeapDays = 0;
	// October 4, 2020 is a Sunday

	cout << "Enter the day number:";
	cin >> day;
	cout << "Enter the month number:";
	cin >> month;
	cout << "Enter the year:";
	cin >> year;

	if (day > 0 && day <= 31) {
		if (month > 0 && month <= 12) {
			if (year >= 1990 and year <= 2500) {
				if (year > YEAR1) {
					yearCount = YEAR1 + 1;
					while (yearCount <= year) {
						if ((yearCount % 4 == 0 && yearCount % 100 != 0) || (yearCount % 400 == 0)) {
							if (yearCount == year) {
								if (month > 2) {
									extraLeapDays += 1;
									break;
								}
							}
							extraLeapDays += 1;
						}
						yearCount++;
					}
					yearDifference = year - YEAR1 - 1;
					countMonth = MONTH1;
					while (countMonth <= 12) {
						totalMDays += monthDays[countMonth - 1];
						countMonth++;
					}
					totalMDays -= DAY1;
					countMonth = 1;
					while (countMonth < month) {
						totalMDays += monthDays[countMonth - 1];
						countMonth++;
					}
					totalMDays += day;
					dayDifference = (yearDifference * 365) + totalMDays + extraLeapDays;
				}

				else if (year == YEAR1) {
					if (month == MONTH1) {
						if (day > DAY1) {
							totalMDays = day - DAY1;
						}
						else {
							totalMDays = DAY1 - day;
						}
					}
					else if (month > MONTH1) {
						countMonth = MONTH1;
						while (countMonth < month) {
							totalMDays += monthDays[countMonth - 1];
							countMonth++;
						}
						totalMDays += day;
						totalMDays -= DAY1;
					}
					else {
						if (month <= 2) {
							extraLeapDays = 1;
						}
						countMonth = month;
						while (countMonth < MONTH1) {
							totalMDays += monthDays[countMonth - 1];
							countMonth++;
						}
						totalMDays += DAY1;
						totalMDays -= day;
					}
					dayDifference = totalMDays + extraLeapDays;
				}

				else {
					if (month > 2) {
						yearCount = year + 1;
					}
					else {
						yearCount = year;
					}
					while (yearCount <= YEAR1) {
						if ((yearCount % 4 == 0 && yearCount % 100 != 0) || (yearCount % 400 == 0)) {
							extraLeapDays += 1;
						}
						yearCount++;
					}
					yearDifference = YEAR1 - year - 1;
					countMonth = month;
					while (countMonth <= 12) {
						totalMDays += monthDays[countMonth - 1];
						countMonth++;
					}
					totalMDays -= day;
					countMonth = 1;
					while (countMonth < MONTH1) {
						totalMDays += monthDays[countMonth - 1];
						countMonth++;
					}
					totalMDays += DAY1;
					dayDifference = (yearDifference * 365) + totalMDays + extraLeapDays;
				}


				extraDays = dayDifference % 7;
				if (extraDays == 0) {
					cout << "Sunday";
				}
				else if (extraDays == 1) {
					cout << "Monday";
				}
				else if (extraDays == 2) {
					cout << "Tuesday";
				}
				else if (extraDays == 3) {
					cout << "Wednesday";
				}
				else if (extraDays == 4) {
					cout << "Thursday";
				}
				else if (extraDays == 5) {
					cout << "Friday";
				}
				else if (extraDays == 6) {
					cout << "Saturday";
				}
				else {
					cout << "An error has occured!";
				}

			}
			else {
				cout << "Invalid year entered!";
			}
		}
		else {
			cout << "Invalid month entered!";
		}
	}
	else {
		cout << "Invalid day entered!";
	}

	return 0;
}