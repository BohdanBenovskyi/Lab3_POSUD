#include "stdafx.h"
#include "matrix.h"
#include <iostream>

using namespace std;

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
	int maxVal = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < j + 1; i++) {
			if (j == 0 && i == 0)
				maxVal = m[j][i];
			else
				if (m[j][i] > maxVal)
					maxVal = m[j][i];
		}
	}
	cout << "Max value: " << maxVal << "\n";
}