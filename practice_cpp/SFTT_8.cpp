#include <iostream>

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
	Circle circle[3];
	circle[2].get_radius(100);

	int p = 0;
	circle[p].show();
	p++;
	circle[p].show();
}