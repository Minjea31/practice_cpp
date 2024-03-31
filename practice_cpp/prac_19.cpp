#include <iostream>
using namespace std;

int main()
{
	float number[6] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		cin >> number[i];
	}

	float max = number[0];

	for (int j = 0; j < 6; j++)
	{
		if (number[j] > max)
		{
			max = number[j];
		}
	}
	cout << max;
}