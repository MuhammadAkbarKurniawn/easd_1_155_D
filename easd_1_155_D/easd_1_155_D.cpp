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

	cout << "\n======================" << endl;
	cout << "\n=Masukkan Element Array=" << endl;
	cout << "\n======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Akbar[i];
	}
}