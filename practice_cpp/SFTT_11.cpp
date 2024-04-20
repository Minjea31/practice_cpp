#include <iostream>
#include <string>
using namespace std;

int main()
{
	int lens = 0;
	string a;
	cout << "문자열을 입력하시오 : ";
	getline(cin, a);

	lens = a.length();


	for (int i = 0; i < 10; i++)
	{
		if (isalpha(a[0]) == 1 || isalpha(a[0]) == 2)
		{
			string temp1;
			string temp2;
			string last;

			temp1 = a.substr(0, 1);
			temp2 = a.substr(1, lens);
			a = temp2 + temp1;

			cout << a;
			cout << endl;
		}

		else if (a[0] == '\n')
		{
			string temp1;
			string temp2;
			string last;

			temp1 = a.substr(0, 1);
			temp2 = a.substr(1, lens);
			a = temp2 + temp1;

			cout << a;
			cout << endl;
		}

		else
		{
			string temp1;
			string temp2;
			string last;

			temp1 = a.substr(0, 2);
			temp2 = a.substr(2, lens);
			a = temp2 + temp1;

			cout << a;
		}
	}

	
}