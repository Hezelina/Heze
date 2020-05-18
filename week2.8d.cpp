#include <iostream>

int main() {

	float x = -2.34;
	float res;

	res = (abs(x - 5) - sin(x)) / 3 + sqrt((x * x) + 2014) * cos(2 * x) - 3;

	std::cout << "result: " << res << std::endl;

	std::getchar();
	std::getchar();

	return 0;
}