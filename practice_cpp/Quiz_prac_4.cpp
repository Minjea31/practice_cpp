#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	double area();
};

double Circle::area()
{
	return 3.14 * radius * radius;
}


int main()
{
	Circle donut;
	donut.radius = 1;
	cout << "¸éÀûÀº " << donut.area();
}