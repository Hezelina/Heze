#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

struct Fruit {

	string Fruitname;
	int Numberoffruits;
	float Numberofbones;
};

void bubbleSortNumberoffruits(Fruit Fruits[], int Size);
void bubbleSortNumberoffruits(Fruit Fruits[], int Size);
void showFruit(const Fruit p);
void randString(string& str);
void Cout(Fruit Fruits[], int Size);
void File(Fruit Fruits[], int Size);

int main() {

	int const Size = 8;
	Fruit Fruits[Size];
	cout << "\Fruit name\t" << "Number of fruits\t" << "Number of bones\n";
	for (int i = 0; i < Size; i++) {

		Fruits[i].Numberoffruits = 1 + rand() % 121;
		Fruits[i].Numberofbones = 1 + rand() % 12;
		randString(Fruits[i].Fruitname);

		showFruit(Fruits[i]);

	}
	Cout(Fruits, Size);
	File(Fruits, Size);


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

void showFruit(const Fruit p) {

	cout << "\t" << p.Fruitname << "\t\t\t"
		<< p.Numberoffruits << "\t\t"
		<< "   " << p.Numberofbones << endl;
}

void bubbleSortNumberofbones(Fruit Fruits[], int Size) {

	int j = 0;
	Fruit tmp;

	for (int i = 0; i < Size; i++) {

		for (int j = Size - 1; j >= i + 1; j--) {
			if (Fruits[j].Numberofbones > Fruits[i].Numberofbones) {

				tmp = Fruits[i];
				Fruits[i] = Fruits[j];
				Fruits[j] = tmp;
			}
		}
	}
}

void bubbleSortNumberoffruits(Fruit Fruits[], int Size) {

	int j = 0;
	Fruit tmp;

	for (int i = 0; i < Size; i++) {

		for (int j = Size - 1; j >= i + 1; j--) {
			if (Fruits[j].Numberoffruits > Fruits[i].Numberoffruits) {

				tmp = Fruits[i];
				Fruits[i] = Fruits[j];
				Fruits[j] = tmp;
			}
		}
	}
}

void Cout(Fruit Fruits[], int Size) {

	cout << endl << endl << "Sorted Number of fruits" << endl << endl;
	cout << "\tFruit name\t" << "Number of fruits\t" << "Number of bones\n";
	bubbleSortNumberofbones(Fruits, Size);

	for (int i = 0; i < Size; i++)
		showFruit(Fruits[i]);

	cout << endl << endl << "Sorted Number of fruits" << endl << endl;
	cout << "\tFruit name\t" << "Number of fruits\t" << "Number of bones\n";
	bubbleSortNumberoffruits(Fruits, Size);

	for (int i = 0; i < Size; i++)
		showFruit(Fruits[i]);
}

void File(Fruit Fruits[], int Size) {

	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << endl << endl << "Sorted Number of bones" << endl << endl;
	f << "\tFruit name\t" << "Number of fruits\t" << "Number of bones\n";
	bubbleSortNumberoffruits(Fruits, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Fruits[i].Fruitname << "\t\t\t"
		<< Fruits[i].Numberoffruits << "\t\t"
		<< "   " << Fruits[i].Numberofbones << endl;

	f << endl << endl << "Sorted Number of bones" << endl << endl;
	f << "\tFruit name\t" << "Number of fruits\t" << "Number of bones\n";
	bubbleSortNumberoffruits(Fruits, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Fruits[i].Fruitname << "\t\t\t"
		<< Fruits[i].Numberoffruits << "\t\t"
		<< "   " << Fruits[i].Numberofbones << endl;
	f.close();
}