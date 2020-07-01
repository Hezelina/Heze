#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float n, s, d, sum;
	const float pi = 3.14159265359;
	do {
		cout << " Введите количество шаров (не менее 1)\n";
		cin >> n;
	} while (n < 1);
	do {
		cout << " Введите толщину их стенок в миллиметрах (не менее 0)\n";
		cin >> s;
	} while (s < 0);
	do {
		cout << " Введите внутренний диаметр внутреннего шара в сантиметрах (не менее 0)\n";
		cin >> d;
	} while (d < 0);
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + (4. / 3 * pi * (pow(s / 10. * i + d / 2, 3) - pow(s / 10.*(i - 1) + d / 2, 3))) / 1000.;
	}
	cout << " Суммарный объём " << sum << " л.\n";
	std::getchar();
	std::getchar();

	return 0;
}