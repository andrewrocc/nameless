#include <iostream>
#include <conio.h>  
#include <algorithm>
#include <string>

using namespace std;

int summ(int **arr, int size) {
	int res_frst = 0;
	cout << "Элементы матрицы ниже главной диагонали: " << endl;
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

void set_arr(int** arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
		for (int k = 0; k < size; k++) {
			arr[i][k] = rand() % 10;
		}
	}
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
	
	int count_matr, size = 5, temp = 0, temp_matr = 0;
	cout << "Скольок матриц вы хотите создать: ";
	cin >> count_matr;
	do {

		int** arr = new int* [size];
		set_arr(arr, size); cout << endl;

		print_arr(arr, size);
		
		summ(arr, size); cout << endl;

		count_matr--;
	} while (count_matr >= 0);

	cout << "Наибольшая сумма среди матриц = " << temp << endl;
	system("pause");
}
