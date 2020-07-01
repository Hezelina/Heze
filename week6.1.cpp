#include <iostream> 
#include <time.h> 


const int N = 10;
int main()
{
	int arr[N], max, min, e1 = 0, e2 = 0;
	srand(time(0));
	for (int i = 0; i < N; i++) {
		arr[i] = 0 + rand() % 20;
		std::cout « arr[i] « " ";
	}
	std::cout « "\n";
	max = arr[0];
	min = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (max < arr[i]) {
			max = arr[i];
			e1 = i;
		}
		if (min > arr[i]) {
			min = arr[i];
			e2 = i;
		}
	}
	std::cout « "Min: " « min « "\n";
	std::cout « "Max: " « max « "\n";
	std::cout « "Index Min: " « e2 « "\n";
	std::cout « "Index Max: " « e1 « "\n";
	std::getchar();
	std::getchar();
	return 0;
}