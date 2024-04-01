#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "입력받을 정수의 개수를 입력하시오 : ";
	cin >> n;

	int* p = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "숫자를 입력하시오 : ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += p[i];
	}

	cout << sum;
	delete[] p;
}
//delete[] 를 이용해 배열 동적할당 반납.