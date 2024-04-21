#include <iostream>
#include <string>
using namespace std;

int main()
{
	int *num = new int[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += num[i];
	}

	cout << sum / 5;
}