#include <iostream>
using namespace std;

class Rectangle {
public:
	double width;
	double height;
	double getArea();
};

double Rectangle::getArea()
{
	return width * height;
};


int main()
{
	Rectangle rect;
	cout << "가로 길이를 입력하시오 :";
	cin >> rect.width;
	cout << "세로 길이를 입력하시오 :";
	cin >> rect.height;
	cout << "사각형의 면적은" << rect.getArea() << endl;
}