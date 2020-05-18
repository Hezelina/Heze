    
#include <iostream>

int main() {
	
	float a, b;

	std::cout << "Please, insert the number: " << std::endl;
	std::cin >> a;

	std::cout << "Please, insert the second number: " << std::endl;
	std::cin >> b;
	
	std::cout	<<"Area: " << a * b<<std::endl
				<<"Perimeter: "<<(a + b) * 2<<std::endl;

	std::getchar();
	std::getchar();
	
	return 0;
}