﻿#include <iostream>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модуля числа, синуса, косинуса и прочее здесь

int main()
{
	float dx, xs, xf;
	const float eps = 0.000001;  // всё, что меньше этого числа считаем нулём

	std::cout << "Enter [xs, xf]: ";
	std::cin >> xs >> xf;

	std::cout << "Enter dx: ";
	std::cin >> dx;

	// заголовок таблицы
	std::cout << "\tx\t\ty" << std::endl;

	std::cout.precision(5);
	float f;
	float x = xs;  // начинаем считать с левого края интервала
	while (x < xf) {
		if (fabs(x - 1) < eps)
			std::cout << "\t"
			<< x
			<< "\t\t Divide on zero"
			<< std::endl;
		else {
			f = exp(2 + (4 * (x * x))) + (6 * x) + sin(x) / ((8 * x) + 11);

			std::cout << "\t"
				<< x
				<< "\t\t"
				<< f
				<< std::endl;
		}
		x += dx;
	}
	std::getchar();
	std::getchar();
	return 0;
}