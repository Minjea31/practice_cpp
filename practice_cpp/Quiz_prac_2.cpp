#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char qwer[100] = { 0 };

	while (true)
	{
		cout << "종료하고 싶으면 yes 를 입력하세요.";
		cin >> qwer;

		if (strcmp(qwer, "yes") == 0)
		{
			cout << "종료 되었습니다.";
			return 0;
		}
	}
}