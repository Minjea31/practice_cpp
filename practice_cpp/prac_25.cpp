#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	char m = 'a' + rand() % 26;
	cout << m;
}