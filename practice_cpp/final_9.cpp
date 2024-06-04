#include <iostream>
using namespace std;

template < class T>
void myswap(T &a, T &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 4, b = 5;
	myswap(a, b);

	cout << a << " " << b;
}