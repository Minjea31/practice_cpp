#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point();
	Point(int a,int b);
	void Show();
};

Point::Point() :Point(0, 0)
{

}

Point::Point(int a,int b)
	: x(a), y(b) { }

void Point::Show()
{
	cout << "x,y ดย" << x << ' ' << y << endl;
}

int main()
{
	Point origin;
	Point target(30, 30);
	origin.Show();
	target.Show();

}