#include <iostream> 
#include <stdlib.h> 
#include <time.h> 

int main()
{
	int arr[15], sum = 0;
	float arif = 0;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0 + rand() % 15;
		std::cout « arr[i] « " ";
		sum += arr[i];
		arif = sum / 10;
	}
	std::cout « "\n srednee arifmet = " « arif « "\n";
	std::cout « "\n";
	for (int i = 0; i < 10; i++) {
		if (arr[i] < arif) std::cout « arr[i] « " ";
	}

	return 0;
}