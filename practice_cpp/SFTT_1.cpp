#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char password[10] = { 0 };

	while (true)
	{
		cout << "암호를 입력하시오 : " << endl;
		cin >> password;


		if (strcmp(password, "qwer") == 0)
		{
			cout << "프로그램을 종료합니다. ";
			break;
		}
		else
		{
			cout << "다시입력하시오 : " << endl;
		}
	}
}