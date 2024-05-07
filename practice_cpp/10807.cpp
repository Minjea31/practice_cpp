#include <iostream>
using namespace std;

int main()
{
	int set = 0;

	cin >> set;
	
	int number[100];

	for (int i = 0; i < set; i++)
	{
		cin >> number[i];
	}

	int f_num = 0;

	cin >> f_num;

	int count = 0;

	for (int i = 0; i < set; i++)
	{
		if (f_num == number[i])
		{
			count += 1;
		}
	}

	cout << count;
}