#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

struct Plane {

	string Planemodel;
	int Horsepower;
	float Speed;
};

void bubbleSortHorsepower(Plane car[], int Size);
void bubbleSortSpeed(Plane car[], int Size);
void showCar(const Plane p);
void randString(string& str);
void Cout(Plane car[], int Size);
void File(Plane car[], int Size);

int main() {

	int const Size = 8;
	Plane Planemodel[Size];
	cout << "\tCar model\t" << "Horsepower\t\t" << "Speed\n";
	for (int i = 0; i < Size; i++) {

		Planemodel[i].Horsepower = 40000 + rand() % 100000;
		Planemodel[i].Speed = 500 + rand() % 1200;
		randString(Planemodel[i].Planemodel);

		showCar(Planemodel[i]);

	}
	Cout(Planemodel, Size);
	File(Planemodel, Size);


	std::getchar();
	std::getchar();


	return 0;
}



void randString(string& str) {

	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {

		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];

	}
	str[str.length()] = 0;

}

void showCar(const Plane p) {

	cout << "\t" << p.Planemodel << "\t\t\t"
		<< p.Horsepower << "\t\t"
		<< "   " << p.Speed << endl;
}

void bubbleSortSpeed(Plane plane[], int Size) {

	int j = 0;
	Plane tmp;

	for (int i = 0; i < Size; i++) {

		for (int j = Size - 1; j >= i + 1; j--) {
			if (plane[j].Speed > plane[i].Speed) {

				tmp = plane[i];
				plane[i] = plane[j];
				plane[j] = tmp;
			}
		}
	}
}

void bubbleSortHorsepower(Plane plane[], int Size) {

	int j = 0;
	Plane tmp;

	for (int i = 0; i < Size; i++) {

		for (int j = Size - 1; j >= i + 1; j--) {
			if (plane[j].Horsepower > plane[i].Horsepower) {

				tmp = plane[i];
				plane[i] = plane[j];
				plane[j] = tmp;
			}
		}
	}
}

void Cout(Plane plane[], int Size) {

	cout << endl << endl << "Sorted Speed" << endl << endl;
	cout << "\tPlanemodel\t" << "Horsepower\t\t" << "Speed\n";
	bubbleSortSpeed(plane, Size);

	for (int i = 0; i < Size; i++)
		showCar(plane[i]);

	cout << endl << endl << "Sorted Horsepower" << endl << endl;
	cout << "\tPlanemodel\t" << "Horsepower\t\t" << "Speed\n";
	bubbleSortHorsepower(plane, Size);

	for (int i = 0; i < Size; i++)
		showCar(plane[i]);
}

void File(Plane plane[], int Size) {

	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << endl << endl << "Sorted Speed" << endl << endl;
	f << "\tPlanemodel\t" << "Number of petals\t\t" << "Speed\n";
	bubbleSortSpeed(plane, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << plane[i].Planemodel << "\t\t\t"
		<< plane[i].Horsepower << "\t\t"
		<< "   " << plane[i].Speed << endl;

	f << endl << endl << "Sorted Horsepower" << endl << endl;
	f << "\tPlanemodel\t" << "Horsepower\t\t" << "Speed\n";
	bubbleSortHorsepower(plane, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << plane[i].Planemodel << "\t\t\t"
		<< plane[i].Horsepower << "\t\t"
		<< "   " << plane[i].Speed << endl;
	f.close();
}
