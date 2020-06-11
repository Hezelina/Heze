#include <iostream>
#include <fstream>
#include <iomanip> 
#include <math.h>

int main() {

	const int max = 25;
	int array[max];
	int sum = 0;

	srand(300);



	for (int i = -10; i <= max; i++) {
		array[i] = rand() % 26 - 10;
		if (array[i] < 6)
			sum = array[i] + sum;
		std::cout << sum << std::endl;
	}



	getchar();
	getchar();

	return 0;
}