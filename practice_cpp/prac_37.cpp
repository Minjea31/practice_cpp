#include <iostream>
#include <string>
using namespace std;

class Circle {
	float radius;
public:
	Circle(float radius = 0) { this->radius = radius; }
	float getRadius() { return radius; }
	void setRadius(float radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; };
};

class NamedCircle : Circle
{
	string name;
public:
	NamedCircle(float radius, string name)
	{
		setRadius(radius);
		this->name = name;
	}

	string getName()
	{
		return name;
	}

	void show()
	{
		cout << "반지름이 " << getRadius() << "인 " << getName() << endl;
	}
};

class InchNamedCircle : NamedCircle
{
	float inch_radius;
public:
	InchNamedCircle(float inch_radius, string name) : NamedCircle(inchTocm(inch_radius), name) {};

	float inchTocm(float inch_radius)
	{
		return inch_radius * 2.54;
	}

	void show()
	{
		NamedCircle::show();
	}
};


int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
	InchNamedCircle pizza(8, "Pizza");
	pizza.show();
}
