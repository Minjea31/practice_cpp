#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(Circle& c);
	Circle()
	{
		radius = 1;
	}
	Circle(int radius)
	{
		this->radius = radius;
	}
	void setradius(int x)
	{
		radius = x;
	}
	int getradius()
	{
		return radius;
	}
	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

Circle::Circle(Circle& c)
{
	this -> radius = c.radius;
}

void swap(Circle& x, Circle& y)
{
	int tmp1 = x.getradius();
	int tmp2 = y.getradius();
	x.setradius(tmp2);
	y.setradius(tmp1);
}

int main()
{
	Circle a(10);
	Circle b(20);
	swap(a, b);
	cout << a.getArea() << " " << b.getArea();
}