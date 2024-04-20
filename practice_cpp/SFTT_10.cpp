#include <iostream>
#include <string>

using namespace std;

struct Circle
{
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle()
	{
		cout << radius << "크기 원 삭제" << endl;
	}
	void get_radius(int r);
	void show();
};

Circle::Circle() : Circle(10) {}

Circle::Circle(int r)
{
	radius = r;
}

inline void Circle::get_radius(int a)
{
	radius = a;
}

void Circle::show()
{
	cout << "원의 크기는 " << radius << endl;
}


int main()
{
	Circle* p;
	p = new Circle[5]{ Circle(1) };

	for (int i = 0; i < 5; i++)
	{
		p[i].show();
	}

	delete[] p;
}