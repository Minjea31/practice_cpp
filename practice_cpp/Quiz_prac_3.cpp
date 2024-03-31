#include <iostream>
using namespace std;


class Rectangle
{
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea()
{
	return width * height;
}

int main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은" << rect.getArea() << endl;
}

//클래스는 변수 선언부와 함수 선언부로 나뉘는데
//class 이름{}; 에다가 안데 public(외부에서 참조 가능) 에다가 변수와
//함수 이름을 적고 그 외부에 함수를 구현하면됨.