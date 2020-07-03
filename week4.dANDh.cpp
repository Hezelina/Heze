#include <iostream>
#include <fstream>
#include <iomanip> 
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2;
	cout << " 3 * x1 - 7, если x1 > 1\n";
	cout << " 3, если x1 = 1\n";
	cout << " 3 * |x1 + 2| - 7, если x1 < 1\n";
	cout << "Введите x1: ";
	cin >> x1;

	if (x1 > 1) {
		cout << " f(x1) = 3 * " << x1 << " - 7 = " << 3 * x1 - 7;
	}
	else {
		if (x1 < 1) {
			cout << " f(x1) = 3 * |" << x1 << " + 2| - 7 = " << 3 * abs(x1 + 2) - 7;
		}
		else {
			cout << " f(x1) = " << 3;
		}
	}
	cout << "\n -----\n\n";
	cout << " 2 * x2 - 10, если x2 > 3\n";
	cout << " 10, если x2 = 3\n";
	cout << " (2 * x2 + 1)^2 - 1, если x2 < 3\n";
	cout << "Введите x2: ";
	cin >> x2;

	if (x2 > 3) {
		cout << " f(x2) = 2 * " << x2 << " - 10 = " << 2 * x2 - 10;
	}
	else {
		if (x2 < 3) {
			cout << " f(x2) = (2 * " << x2 << " + 1)^2 - 1 = " << pow((2 * x2 + 1), 2) - 1;
		}
		else {
			cout << " f(x2) = " << 10;
		}
	}
	cout << "\n -----\n";
}

