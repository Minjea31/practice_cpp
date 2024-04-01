#include <iostream>
using namespace std;

class Circle
{
	int radius;

public:
	Circle()
	{
		radius = 1;
	}
	Circle(int r)
	{
		radius = r;
	}
	double getArea();
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut(30);

	Circle* p;
	p = &donut;
	cout << (*p).getArea() << endl;
}

//포인터를 이용해 객체를 만들때 그 객체를 먼저 클래스를 이용하여 선언을 해야함.
//p->멤버함수 or (*p).멤버함수  이런식으로 참조 가능.