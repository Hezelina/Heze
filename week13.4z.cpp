#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	fstream f;
	f.open("Z4.txt", ios::out | ios::trunc);

	string str("hahahhahah       lol      kek ");
	int k = 0;
	cout << str << endl;
	f << str << endl;

	while (k != str.size())
	{
		if (str[k] == ' ' && str[k + 1] == ' ')
			str.erase(k, 1);
		else k++;
	}
	cout << str << endl;
	f << str << endl;
	f.close();
	system("pause");
}
