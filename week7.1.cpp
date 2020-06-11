#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void selectionSort(float arr[], int len);
void bubbleSort(float arr[], int len);

void selectionSort(float arr[], int len) {

	int per = 0;
	int j = 0;
	float tmp = 0;


	for (int i = 0; i < len; i++) {
		// ищем номер наименьшего элемента среди элементов от i-го до конца
		j = i;


		for (int k = i; k < len; k++) {
			if (arr[j] > arr[k]) {
				j = k;
			}
		}
		// меняем местами наибольший элемент и текущий
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		per = per + 1;
	}
}

void bubbleSort(float arr[], int len) {
	int per = 0;
	float tmp = 0;
	// идём по массиву
	for (int i = 0; i < len; i++) {
		// делаем проверки в оставшейся части массива
		for (int j = len - 1; j >= i + 1; j--) {
			if (arr[j] < arr[j - 1]) {  // сравниваем соседние элементы
				// делаем перестановку
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				per = per + 1;

			}
		}
	}
	std::cout << " Perest = " << per << endl;
}