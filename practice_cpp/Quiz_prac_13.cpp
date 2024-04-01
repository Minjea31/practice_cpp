#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r)
	{
		radius = r;
	}
	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(int r)
{
	radius = r;
}

Circle::~Circle()
{
	cout << "소멸자 실행";
}

int main()
{
	int radius;
	while (true)
	{
		cout << "정수 반지름 입력(음수이면 종료)";
		cin >> radius;
		if (radius < 0)
			break;
		Circle* p = new Circle(radius);
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p;
	}
}

//객체에서 동적할당은 멤버변수를 사용자가 그떄그때 지정하고 싶기때문이다.