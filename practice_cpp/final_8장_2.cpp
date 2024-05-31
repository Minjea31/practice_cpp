#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0)
	{
		this->radius = radius;
	}
	int getRadius()
	{
		return radius;
	}
	void setRadius(int radius)
	{
		this->radius = radius;
	}
	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

class NamedCircle : public Circle
{
	string name;
	int set;
public:
	NamedCircle() : Circle() {}
	NamedCircle(int radius, string name) : Circle(radius)
	{
		this->name = name;
	}

	void setname(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return name;
	}
};

int main()
{
	NamedCircle pizza[5];

	for (int i = 0; i < 5; i++)
	{
		int set_rad = 0;
		string set_name;
		cin >> set_rad;
		cin >> set_name;
		pizza[i].setRadius(set_rad);
		pizza[i].setname(set_name);
	}

	int index = 0;
	for (int i = 0; i < 5; i++)
	{
		if (pizza[i].getArea() > pizza[index].getArea())
			index = i;

	}

	cout << "가장 면적이 큰 피자는 " << pizza[index].getName() << "입니다.";
}