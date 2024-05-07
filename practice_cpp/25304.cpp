#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int num = 0;
	int price = 0;
	int num_p = 0;
	int result = 0;

	cin >> sum;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> price >> num_p;
		result += price * num_p;
	}

	if (sum == result)
		cout << "Yes";
	else
		cout << "No";
}