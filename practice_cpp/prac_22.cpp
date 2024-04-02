#include <iostream>
using namespace std;


class MyIntStack
{
	int p[10];
	int tos;
public:
	MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

bool MyIntStack::push(int n)
{
	p[n] = n;

	if (n > 10)
		return false;
	else
		return true;
}

bool MyIntStack::pop(int& n)
{

	if (p[n] == NULL)
		return false;
	else
		return true;
}

int main()
{
	MyIntStack a;
	for (int i = 0; i < 11; i++)
	{
		if (a.push(i))
			cout << i << ' ';
		else
			cout << endl << i + 1 << "번째 stackfull" << endl;
	}

	int n;
	for (int i = 0; i < 11; i++)
	{
		if (a.pop(n))
			cout << n << ' ';
		else
			cout << endl << i + 1 << "번째 stack empty";
	}
	cout << endl;
}