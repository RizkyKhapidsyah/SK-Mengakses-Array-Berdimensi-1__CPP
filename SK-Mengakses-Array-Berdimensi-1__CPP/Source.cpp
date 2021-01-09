#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int i;
	char nama[5][20];
	float nilai1[5];
	float nilai2[5];
	float hasil[5];
	
	for (i = 1; i <= 2; i++) {
		cout << "Data Ke - " << i << endl;
		cout << "Nama Siswa : "; gets_s(nama[i]);
		cout << "Nilai MidTest : "; cin >> nilai1[i];
		cout << "Nilai Final : "; cin >> nilai2[i];

		hasil[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60);

		cout << endl;
	}

	cout << "------------------------------------------" << endl;
	cout << "No. Nama Siswa Nilai Nilai ";
	cout << "Hasil" << endl;
	cout << "MidTest Final ";
	cout << "Ujian" << endl;
	cout << "------------------------------------------" << endl;
	
	for (i = 1; i <= 2; i++) {
		cout << setiosflags(ios::left) << setw(4) << i;
		cout << setiosflags(ios::left) << setw(10) << nama[i];
		cout << setprecision(2) << " " << nilai1[i];
		cout << setprecision(2) << " " << nilai2[i];
		cout << setprecision(2) << " " << hasil[i] << endl;
	}
	
	cout << "------------------------------------------" << endl;

	_getch();
	return 0;
}