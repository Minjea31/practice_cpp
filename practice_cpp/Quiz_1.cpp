#include <iostream>
using namespace std;

class Circle
{
	char* name;
	int radius;
public:
	Circle(const char* name, int radius);
	Circle(const Circle& circle);
	~Circle();
	void show()
	{
		cout << "[" << name << " " << radius << "]" << endl;
	}

	void ChangeName(const char* name);
	void ChangeRadius(int radius);
};

Circle::Circle(const char* name = "circle", int radius = 1)
{
	this->name = new char[10];
	strcpy(this->name, name);
	this->radius = radius;
	cout << "생성자 : " << '[' << name << ' ' << radius << ']' << endl;
}

Circle::Circle(const Circle& circle)
{
	this->radius = circle.radius;
	this->name = new char[strlen(circle.name)];
	strcpy(this->name, circle.name);
	cout << "복사 생성자 : " << '[' << name << ' ' << radius << ']' << endl;
}

Circle::~Circle()
{
	cout << "소멸자 : " << '[' << name << ' ' << radius << ']' << endl;
}

void Circle::ChangeName(const char* name)
{
	this->name = new char[strlen(name)];
	strcpy(this->name, name);
}

void Circle::ChangeRadius(int radius)
{
	this->radius = radius;
}

int main()
{
	Circle c1;
	Circle c2("pizza", 20);
	Circle c3(c2);
	c3.ChangeName("pancake");
	c3.ChangeRadius(5);
	cout << "c3 = ";
	c3.show();
	return 0;
}