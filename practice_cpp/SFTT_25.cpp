#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
	string sen;
	getline(cin, sen, '\n');

	for (int i = 0; i < sen.length(); i++)
	{
		sen[i] = tolower(sen[i]);
	}

	int count = 0;

	
	for (int i = 0; i < sen.length(); i++)
	{
		if (sen[i] == 'a')
		{
			count += 1;
		}
	}

	cout << "a : " << count;

}