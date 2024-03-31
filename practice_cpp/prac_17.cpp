#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하시오 :";

	while (true)
	{
		cout << "암호 >>";
		cin >> password;

		if (strcmp(password, "qwerqwer") == 0)
		{
			cout << "프로그램을 종료합니다";
			break;
		}

		else
			cout << "암호가 틀립니다.";
	}
}

// 암호처럼 두 문자열이 같음을 확인할려면 cstring 헤더파일을 인클루드하고
// strcmp(비교할려는 문자, 일치문자) 를 이용해 확인. (동일할경우 0 반환)