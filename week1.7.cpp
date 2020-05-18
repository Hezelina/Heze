
#include <iostream>

int main() {

	float a, cube, square;


	std::cout << "Please, insert the number: " << std::endl;
	std::cin >> a;

	square = a * a;
	cube = square * a;

	std::cout << square << std::endl
		<< cube << std::endl;

	std::getchar();
	std::getchar();

	return 0;
}
