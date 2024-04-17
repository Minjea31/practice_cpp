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

};

Circle& operator++(Circle& op) { // 전위 ++ 연산자 함수 구현
	op.radius++;
	return op; // 연산 결과 리턴
}

Circle operator++(Circle& op, int x) { // 후위 ++ 연산자 함수 구현
	Circle tmp = op; // 변경하기 전의 op 상태 저장
	op.radius++;
	return tmp; // 변경 이전의 op 리턴
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

int main() 
{
	Circle a(5), b(4);
	++a; // 반지름을 1 증가 시킨다.
	b = a++; // 반지름을 1 증가 시킨다.
	a.show();
	b.show();
	Circle c = 2 * a + b;
	c.show();
}