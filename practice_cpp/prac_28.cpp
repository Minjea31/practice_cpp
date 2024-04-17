#include <iostream>
using namespace std;

class Circle
{
private:
	static int numOfCircle;
	int radius;

public:
	Circle(int r = 1)
	{
		radius = r;
		numOfCircle += 1;
	}
	~Circle()
	{
		numOfCircle -= 1;
	}

	static int showCircle()
	{
		return numOfCircle;
	}
};

int Circle::numOfCircle = 0;

int main()
{
	Circle* p = new Circle[10];
	cout << Circle::showCircle() << endl;

	delete[] p;
	cout << Circle::showCircle() << endl;

	Circle a;
	cout << Circle::showCircle() << endl;

	Circle b = Circle(10);

	cout << Circle::showCircle() << endl;
}