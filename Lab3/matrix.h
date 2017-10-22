#pragma once
#ifndef MATRIX_H
#define MATRIX_H

void allocMatrix(int** &m, int n);
void releaseMatrix(int** &m, int n);
void initMatrix(int** &m, int n);
void showMatrix(int** m, int n);
void showDiagonal(int** m, int n);
void findMaxValue(int** m, int n);

#endif // !MATRIX_H
