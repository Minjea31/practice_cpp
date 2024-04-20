#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char name1[6] = { 'a','a','a','a','a', '\0'};
	char name2[5] = { 'a', 'a', 'a', 'a', 'a'};

	cout << name1 << endl;
	cout << name2 << endl;
	cout << name1[1] << endl;
	cout << name2[1] << endl;
}