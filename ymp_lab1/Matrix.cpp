#include "Matrix.h"
#include <iostream>
#include <ctime>


using namespace std;


int** mAlloc(const int m, const int n)
{
	int** a = new int* [m];
	for (int i = 0; i < m; i++)
		*(a + i) = new int[n];
	return a;
}

void mDel(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
		delete[] arr[i];
	delete[] arr;
}

void mInput(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> *(*(arr + i) + j);
}

void mRand(int** arr, const int m, const int n)
{
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			*(*(arr + i) + j) = rand() % 100;
}

void mPrint(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << *(*(arr + i) + j) << " ";
		cout << "\n";
	}
}

int mSum(int** arr, const int m, const int n)
{
	int result = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			result += *(*(arr + i) + j);
	return result;
}