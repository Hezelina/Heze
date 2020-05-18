#include <iostream>

int main() {

	float a, b, result, result2;

	std::cout << "Enter your prices: " << std::endl;
	std::cin >> a >> b;

	result = (a * 0.3) + (b * 0.4);      //a

	result2 = ((a * 1.8) + (b * 2)) * 3;    //b

	std::cout << "Result:" << result << std::endl
		<< result2 << std::endl;

	std::getchar();
	std::getchar();

	return 0;
}