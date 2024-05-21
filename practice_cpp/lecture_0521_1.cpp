#include <iostream>
using namespace std;

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
void reverseArray(T Array[], int n)
{
	for (int i = 0; i < n/2; i++)
	{
		myswap(Array[i], Array[n-i-1]);
	}
}

int main() 
{
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	cout << endl;
	return 0;
}
