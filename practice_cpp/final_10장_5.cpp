#include <iostream>
using namespace std;

template <typename T1>
T1* concat(T1 a[], int sizea, T1 b[], int sizeb)
{
	T1* new_Arrange = new T1[sizea + sizeb];

	for (int i = 0; i < sizea; i++)
	{
		new_Arrange[i] = a[i];
	}
	for (int i = 0; i < sizeb; i++)
	{
		new_Arrange[sizea+i] = b[i];
	}
	return new_Arrange;
}

int main()
{
	char a[] = { 'd','e','f','g','h'};
	char b[] = { 'a', 'b', 'c' };

	char* c = new char[5 + 3];

	c = concat(a, 5, b, 3);

	for (int i = 0; i < 8; i++)
	{
		cout << c[i] << ' ';
	}

	delete[] c;
}