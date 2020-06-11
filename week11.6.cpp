#include <iostream>
#include <fstream>
#include<string>
#include<stdlib.h>
#include <math.h>

using namespace std;

/*задание 6(21/05/2020) */

void matrixCreate() {
	const int rows = 5;
	const int cols = 10;
	int matrix[rows][cols]; 
	int massiv[cols];

	srand(0);
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			matrix[i][j] = rand() % 150 - 50; 

	cout << "Old matrix: " << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			cout << matrix[i][j] << "\t";
		cout << endl;  // Old matrix output
	}

	int max = matrix[0][0]; //min element 
	int mr = 0, mc = 0; //coordinator 

	for (int i = 0; i < rows; i++) //find maximum
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				mr = i;
				mc = j;
			}
		}

	for (int i = 0; i < cols; i++) {
		massiv[i] = { max }; //massivitization 
	}
	cout << endl;
	cout << "Maximum element: " << max << "\t"
		<< "Row: " << mr + 1 << "\t"
		<< "Columns: " << mc + 1 << endl;
	cout << endl;

	cout << "Massive: " << endl;

	for (int i = 0; i < cols; i++) { //Massive
		cout << massiv[i] << "\t";
	}

}

int main() {

	matrixCreate();

	getchar();
	getchar();

	return 0;
}