#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (long long int i = pow(10,12); i > 0; i--)
	{
		for (long long int j = i-1; j > 0; j--)
		{
			if (i % j == 0)
			{
				break;
			}
			else if (j == 2)
			{
				cout << i << endl;
				return 0;
			}
		}

	}
}