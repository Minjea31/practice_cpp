#include <iostream>
using namespace std;

int main()
{
	cout << 'i' << '\t' << 'n' << '\t' << "refn" << '\t' << "refi" << endl;
	int i = 5;
	int n = 10;
	int& refn = n;
	int& refi = i;

	refn = 10;
	refn++;

	cout << i << '\t' << n << '\t' << refn << '\t' << refi << endl;
	refi = 100;
	cout << i << '\t' << n << '\t' << refn << '\t' << refi << endl;

	int* p = &refn;
	*p = 20;
	int** q = &p; // 이중 포인터.
	(**q)++; 
	cout << i << '\t' << n << '\t' << refn << '\t' << refi << endl;
}