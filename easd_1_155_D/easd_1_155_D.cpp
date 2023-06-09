// 1. Karena dengan menggunakan Algoritma kita membuat kemungkinan kemungkinan yang ada dan menyusunnya menjadi solusi terbaik untuk menyelesaikan suatu masalah dengan cara yang paling efisien
// 2. Static dan Dynamic
// 3. Kecepatan mesin / Processor, Penerjemah / Compiler, Sistem Operasi, Bahasa Program, Ukuran input
// 4. BubbleSort, Karena algoritmanya paling sederhana dan orde pertumbuhannya quadratik dengan mengurutkan dari belakang paling besar menuju depan paling kecil.
// 5. - Quadaratic :
//		Bubble Sort, Selection Sort, Quick Sort, Merge Sort
//	  - Loglinear :
//		Insertion Sort, Shell Sort
//6. Membuat Algoritma Selection sort jawaban dibawah :



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

	cout << "\n=========================" << endl;
	cout << "\n=Masukkan Element Array=" << endl;
	cout << "\n=========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Akbar[i];
	}
}

void SelectionSort() {
	for (int MA = 0; MA <= n - 2; MA++) {
		int min_index = MA;
		for (int i = MA + 1; i < n; i++) {
			if (Akbar[i] < Akbar[min_index]) {
				min_index = i;
			}
		}
		int temp = Akbar[MA];
		Akbar[MA] = Akbar[min_index];
		Akbar[min_index] = temp;
	}
}

void display() {
	cout << "\n============================" << endl;
	cout << "Element Array Yang Telah Terususun" << endl;
	cout << "============================" << endl;

	for (int i = 0; i < n; i++) {
		cout << Akbar[i]<< " ";
	}
}
int main() {
	input();
	SelectionSort();
	display();

	return 0;
}