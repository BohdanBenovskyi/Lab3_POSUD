// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "matrix.h"

using namespace std;

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
	findMaxValue(arr, n);
	releaseMatrix(arr, n);
	

	system("pause");
    return 0;
}