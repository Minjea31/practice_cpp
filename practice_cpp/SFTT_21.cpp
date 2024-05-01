#include <iostream>
using namespace std;

int sum(int f, int l)
{
	int sum= 0;
	for (int i = f; i < l; i++)
	{
		sum += i;
	}
	return sum;
}

int sum(int f)
{
	int sum= 0;
	for (int i = 0; i < f+1; i++)
	{
		sum += i;
	}
	return sum;
}


int main()
{
	cout << sum(3, 5) << endl << sum(3) << endl << sum(100) << endl;
}