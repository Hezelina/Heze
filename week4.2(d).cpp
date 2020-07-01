#include <iostream>
#include <fstream>
#include <iomanip> 
#include <math.h>

int main() {

	std::ofstream file;
	file.open("result.txt");

	float x, y;

	std::cout << "Input your value x:" << std::endl;
	std::cin >> x;

	if (x > 1) {
		y = 3 * x - 7;
		std::cout << y << std::endl;
		file << y << std::endl;
	}
	if (x == 1) {
		y = 3;
		std::cout << y << std::endl;
		file << y << std::endl;
	}
	if (x < 1) {
		y = 3 * fabs(x + 2) - 7;
		std::cout << y << std::endl;
		file << y << std::endl;
	}
	file.close();
	std::getchar();
	std::getchar();

	return 0;
}