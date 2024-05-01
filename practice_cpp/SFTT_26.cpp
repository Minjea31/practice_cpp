#include <iostream>
#include <string>
#include <locale>
#include <random>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	string sen;
	char voca = 0;

	/*getline(cin, sen, '\n');*/
	sen = "hello world";
	/*cin.ignore();*/

	string what;
	int num = rand() % sen.length();
	what = sen.substr(num,1);
	
	while (!isalpha(what[0]))
	{
		num = rand() % sen.length();
		what = sen.substr(num,1);
	}

	sen[num] = what[0];

	cout << sen;
	
}