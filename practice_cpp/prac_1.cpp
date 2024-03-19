#include <iostream>
#include <cstring> /*strcmp() 함수를 사용하기 위한 헤더파일*/
using namespace std;

int main()
{
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하시오 :" << endl;
	while (true)
	{
		cout << "암호 :";
		cin >> password;

		if (strcmp(password, "kim") == 0)
		{
			cout << "프로그램을 종료합니다.";
			break;
		}
		else
			cout << "다시 입력하시오";
	}
	return 0;
}