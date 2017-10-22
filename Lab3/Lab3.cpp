// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void allocMatrix(int** &m, int n);
void releaseMatrix(int** &m, int n);
void initMatrix(int** &m, int n);
void showMatrix(int** m, int n);
void showDiagonal(int** m, int n);
void findMaxValue(int** m, int n);

int main()
{
	int n = 0;
	cout << "Enter size of matrix: ";
	cin >> n;
	int **arr = NULL;

	allocMatrix(arr, n);
	initMatrix(arr, n);
	showMatrix(arr, n);
	showDiagonal(arr, n);
	releaseMatrix(arr, n);
	

	system("pause");
    return 0;
}

void allocMatrix(int** &m, int n) {
	m = new int*[n];

	for (int i = 0; i < n; i++)
		m[i] = new int[n];
}

void releaseMatrix(int** &m, int n) {
	for (int i = 0; i < n; i++)
		delete[] m[i];

	delete[] m;
}

void initMatrix(int** &m, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			m[i][j] = rand() % 100;
}

void showMatrix(int** m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << m[i][j] << "\t";
		cout << "\n";
	}
}

void showDiagonal(int** m, int n) {
	cout << "\n\n=======================================================\n\n";
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < j + 1; i++) {
			cout << m[j][i] << "\t";
		}
		cout << "\n";
	}
	cout << "\n=========================================================\n\n";
}

void findMaxValue(int** m, int n) {

}