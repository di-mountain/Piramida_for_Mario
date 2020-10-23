#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int height;
	cout << "Введите высоту пирамиды: " << endl;
	cin >> height;
	cout << endl << "Построение пирамиды..." << endl<<endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height - i - 1; j++) {
			cout << " ";
		}

		for (int j = 0; j < i + 2; j++) {
			cout << "#";
		}
		cout << endl;
	}
	_getch();
	return 0;
}