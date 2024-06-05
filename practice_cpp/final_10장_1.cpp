#include <iostream>
using namespace std;

template <typename T>
T biggest(T x[], int sum)
{
	T big = x[0];
	for (int i = 0; i < sum; i++)
	{
		if (big < x[i])
		{
			big = x[i];
		}
	}
	return big;
}

int main()
{
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
}