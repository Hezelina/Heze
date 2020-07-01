#include <iostream>

int main() {

	int count, count2;
	float z, res;

	std::cout << "Choose your start value (C-[1],K-[2] or F-[3]): " << std::endl;
	std::cin >> count;

	std::cout << "Insert your number: " << std::endl;
	std::cin >> z;

	std::cout << "Convert in (C-[1],K-[2] or F-[3]): " << std::endl;
	std::cin >> count2;

	if (count == 1 && count2 == 1)
		res = z;
	if (count == 1 && count2 == 2)
		res = z + 273.15;
	if (count == 1 && count2 == 3)
		res = z * 1.8 + 32;

	if (count == 2 && count2 == 1)
		res = z - 273.15;
	if (count == 2 && count2 == 2)
		res = z;
	if (count == 2 && count2 == 3)
		res = z * 1.8 - 459.67;

	if (count == 3 && count2 == 1)
		res = (z - 32) / 1.8;
	if (count == 3 && count2 == 2)
		res = (z + 459.67) / 1.8;
	if (count == 3 && count2 == 3)
		res = z;

	std::cout << "Result: " << res << std::endl;

	std::getchar();
	std::getchar();

	return 0;
}