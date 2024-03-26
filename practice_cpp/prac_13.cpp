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

	void setRadius(int r)
	{
		radius = r;
	}
};

double Circle::getArea()
{
	return 3.14 * radius * radius;
}


int main()
{
	Circle circle[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "반지름을 입력하시오 : ";
		int set;
		cin >> set;
		
		circle[i].setRadius(set);
	}

	int counter = 0;
	for (int j = 0; j < 3; j++)
	{
		
		if (circle[j].getArea() > 100)
			counter += 1;
	}
	cout << "면적이 100보다 큰 원은 " <<counter<< "개 입니다.";
}