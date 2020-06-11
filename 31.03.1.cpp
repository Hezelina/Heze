#include <iostream>
#include <fstream>
#include <iomanip> 
#include <math.h>

int main() {

	const int max = 25;
	int array[max];

	srand(300);

	for (int i = -10; i <= max; i++) {
		array[i] = rand() % 26 - 10;
		std::cout << array[i] << std::endl;
	}

	getchar();
	getchar();

	return 0;
}