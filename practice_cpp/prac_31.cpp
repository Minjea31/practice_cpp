#include <iostream>
using namespace std;



class Circle 
{
	int radius;
public:
	Circle(int radius = 0) 
	{
		this->radius = radius; 
	}
	void show() 
	{
		cout << "radius = " << radius << " 인 원" << endl;
	}
	friend Circle& operator++(Circle& op);
	friend Circle operator++(Circle& op, int x);
	friend Circle operator* (int x, Circle& op);
	friend Circle operator+ (Circle op1, Circle op2);
	friend Circle operator+ (int a, Circle op);

};

Circle& operator++(Circle& op) 
{ // 전위 ++ 연산자 함수 구현
	op.radius++;
	return op; // 연산 결과 리턴
}

Circle operator++(Circle& op, int x) 
{ 
	Circle tmp = op;
	op.radius++;
	return tmp; 
}

Circle operator* (int x, Circle& op)
{
	op.radius = op.radius * x;
	return op;
}

Circle operator+ (Circle op1, Circle op2)
{
	Circle temp;
	temp.radius = op1.radius + op2.radius;
	return temp;
}

Circle operator+ (int a, Circle op)
{
	Circle temp;
	temp.radius = a + op.radius;
	return temp;
}



int main() 
{
	Circle a(5), b(4);
	/*++a; 
	b = a++; 
	a.show();
	b.show();*/
	Circle c = 2 + a;
	a.show();
	c.show();
}

//안사라지면 참조, 사라지면 그냥 값만 return