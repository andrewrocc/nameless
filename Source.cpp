#include <iostream>
#include <conio.h>  
#include <algorithm>
#include <string>

using namespace std;

int summ(int **arr, int size) {
	int res_frst = 0;
	cout << "�������� ������� ���� ������� ���������: " << endl;
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		for (int k = 0; k < size; k++) {
			if (i > k) {
				res_frst += arr[i][k];
				cout << arr[i][k] << ' ';
			}
		}
	} cout << "\t\t" << res_frst;
	return res_frst;
}

int** set_arr(int** arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
		for (int k = 0; k < size; k++) {
			arr[i][k] = rand() % 10;
		}
	} return arr;
}

void print_arr(int** arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int k = 0; k < size; k++) {
			cout << arr[i][k] << '\t';
		} cout << endl;
	}
}

void main() {
	setlocale(LC_CTYPE, "Russian");
	
	int count_matr, size = 5, nameless, temp = 0;
	cout << "������� ������ �� ������ �������: ";
	cin >> count_matr;
	count_matr--;
	do {

		int** arr = new int* [size];
		arr = set_arr(arr, size); cout << endl;

		print_arr(arr, size);
		
		nameless = summ(arr, size); cout << endl;
		if (nameless > temp)
			temp = nameless;

		count_matr--;
	} while (count_matr >= 0);

	cout << "���������� ����� ����� ������ = " << temp << endl;
	system("pause");
}
