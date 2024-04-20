#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "입력할 정수 갯수를 입력하시오 : ";
	cin >> num;

	int* nump = new int[num];

	for (int i = 0; i < num; i++)
	{
		cout << "숫자를 입력하시오 : ";
		cin >> nump[i];
		
	}

	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += nump[i];
	}
	cout << sum;

	delete []nump;
}
/*
2차원 배열 할당
int** arr = new int*[3];

for(int i=0; i<3; i++)
	arr[i] = new int[4];

2차원 배열 반환
for(int i=0; i<3; i++)
	delete[] arr[i];

delete[] arr;
*/