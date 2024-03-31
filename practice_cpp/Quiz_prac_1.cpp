#include <iostream>
using namespace std;

int main()
{
	char qwer[100] = { 0 };
	cout << "문자를 입력하시오 :";
	cin.getline(qwer, 100, '\n');

	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		if (qwer[i] == 'x')
			count += 1;
	}

	cout << count;
}