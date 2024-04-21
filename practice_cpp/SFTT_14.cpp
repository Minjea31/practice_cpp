#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "아래에 한줄을 입력하세요.(exit를 입력하면 종료)" << endl;
	getline(cin, str);

	int num;
	num = str.length();

	cout << str.substr(1, 3);

	for (int i = num - 1; i >= 0; i--)
	{
		string part;
		part = str.substr(i, 1);
		cout << part << endl;
	}
}

//substr(a,b)는 a부터 몇개의 문자를 가져올껀지를 의미