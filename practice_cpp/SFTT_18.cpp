#include <iostream>
#include <cstring>
using namespace std;


char& find(char a[], char f, bool& b)
{
	int j = -1;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == f)
		{
			b = true;
			j = i;
			break;
		}
		else if (a[i] != f)
		{
			b = false;
		}
	}
	return *a;
}



int main()
{
	char s[] = "Mike";
	bool b = false;
	char loc = find(s, 'M', b);
	if (b == false)
	{
		cout << "찾을수 없음" << endl;
		return 0;
	}

	loc = 'm';
	cout << s << endl;
}