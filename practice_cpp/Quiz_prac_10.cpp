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
	Circle circleArray[3]; //기본생성자 radius = 1로 만들어짐. -> 배열은 기본생성자로 만들어짐.
	//Circle circleArray[3] = {Circle(10), Circle(20), Circle(30)}; 이런식으로 초기화 가능.

	for (int i = 0; i < 3; i++)
	{
		circleArray[i].setRadius(10 * i);
	}

	for (int j = 0; j < 3; j++)
	{
		cout << circleArray[j].getArea() << endl;
	}

	Circle* p;
	p = circleArray; //배열자체로도 주소임.
	for (int i = 0; i < 3; i++)
	{
		cout << (*p).getArea() << endl;
		p++;
	}
}

//배열로 객체의 반지름들을 정할때 생성자를 이용하는게 아니라 
//반지름들 변수를 참조할수 있는 멤버함수를 만들어야됨.