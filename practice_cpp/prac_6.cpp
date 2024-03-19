#include <iostream>
using namespace std;

int main()
{
	int num1, num2, result;
	char op;

	cout << "수식을 입력하시오 : ";
	cin >> num1 >> op >> num2;

	switch (op)
	{
	case '+' :
		result = num1 + num2;
		break;

	case '/':
		if (num2 == 0)
		{
			cout << "오류가 발생했습니다.";
			return 0;
		}
		result = num1 / num2;
		break;

	case 'x':
		result = num1 * num2;
		break;

	default:
		cout << "잘못된 연산자";
		return 0;
	}
	cout << result;
}