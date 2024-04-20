#include <iostream>

using namespace std;

int main()
{
	char qwer[100] = { 0 };
	cout << "입력하시오 : ";
	cin.getline(qwer, 100, '\n');
	cout << qwer;
}