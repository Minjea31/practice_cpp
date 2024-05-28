#include <iostream>
using namespace std;

int main()
{
	cout.put('H');
	cout.put(33);
	cout << endl;

	cout.put('C').put('+');

	char sen[100] = "I love programming";
	cout.write(sen, 6);
}