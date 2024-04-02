#include <iostream>
using namespace std;

int main()
{
	int num[5];
	cout << "숫자를 입력하시오 : ";
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];


	for (int i = 0; i < 4; i++)
	{
		int minIndex = i;

		for (int j = i + 1; j < 5; j++)
		{
			if (num[minIndex] > num[j])
			{
				minIndex = j;
			}
		}
		int temp = num[i];
		num[i] = num[minIndex];
		num[minIndex] = temp;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << num[i] << ' ';
	}
	
}