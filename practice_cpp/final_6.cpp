#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void draw()
	{
		cout << "---shape---" << endl;
	}
};

class Circle : public Shape
{
public:
	int x;
	virtual void draw()
	{
		Shape::draw();
		cout << "Circle" << endl;
	}
};

int main()
{
	Shape q, *qBas;
	Circle p, *pDer;
	p.draw(); // Circle
	pDer = &p;
	pDer->draw(); // Circle
	q.draw(); // Shape;
	qBas = &q;
	qBas->draw(); // Shape
	q.Shape::draw(); // Shape
	qBas = &p;
	qBas->draw(); // Circle
	pDer = (Circle*)&q;
	pDer->draw(); //Circle
	p.Shape::draw(); // shape
}

//각 객체의 클래스에 있는 함수를 호출함.
//하지만 만약에 Circle 객체로 Shape의 draw()함수를 호출하고 싶으면 Shape::draw()