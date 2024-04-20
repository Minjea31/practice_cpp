#include <iostream>

using namespace std;

int main()
{
	char name[10];
	char MAX_name[10];
	int lens = 0;
	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');
		if (strlen(name) > lens)
		{
			strcpy(MAX_name, name);
		}
		
	}
	cout << MAX_name;
}