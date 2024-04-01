#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1, num2;
	char op;
	cout << "수식을 입력하시오 : ";
	cin >> num1 >> op >> num2;


	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;
	}
}