#include <iostream>
using namespace std;

class Integer
{
	int num;
public:
	Integer()
	{
		num = 1;
	}
	Integer(int n)
	{
		num = n;
	}
	inline int get()
	{
		return num;
	}
	inline void set(int n)
	{
		num = n;
	}
};

int main()
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';
}