#include <iostream>
using namespace std;

int Akbar[75];
int n;

void input() {
	while (true) {
		cout << "Masukkan Panjang Elemenet Array : ";
		cin >> n;

		if (n <= 75) break;
		else cout << "\n Maksimum Panjang Array Adalah 75" << endl;
	}

}