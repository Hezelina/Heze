#include <iostream>

float n;

int main()
{
	std::cout << "Enter n: ";
	std::cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++)
			std::cout << 0;
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::getchar();
	std::getchar();
	return 0;
}