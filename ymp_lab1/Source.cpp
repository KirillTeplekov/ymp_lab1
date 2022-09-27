#include "Matrix.h"
#include <iostream>

using namespace std;

int main()
{
	int** a = mAlloc(2, 2);
	mRand(a, 2, 2);
	cout << endl;
	mPrint(a, 2, 2);
	cout << endl;
	cout << mSum(a, 2, 2) << endl;
	mInput(a, 2, 2);
	mPrint(a, 2, 2);
}