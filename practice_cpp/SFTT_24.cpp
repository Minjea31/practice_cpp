#include <iostream>
using namespace std;

class Power
{
	int kick;
	int punch;

public:
	Power(int kick = 10, int punch = 10)
	{
		this->kick = kick;
		this->punch = punch;
	}


	void show();

	Power operator+(Power op);
	Power operator++();
	Power operator++(int x);
	friend Power operator+(int x, Power& a);
};

void Power::show()
{
	cout << "kick : " << kick << endl << "punch : " << punch << endl;
}

//합 구현
Power Power::operator+(Power op)
{
	Power temp;
	temp.kick = this->kick + op.kick;
	temp.punch = this->punch + op.punch;
	return temp;
}

//전위 증가 구현
Power Power::operator++()
{
	kick++;
	punch++;
	return *this;
}

//후위 증가 구현
Power Power::operator++(int x)
{
	Power temp;
	temp.kick = this->kick;
	temp.punch = this->punch;

	this->kick++;
	this->punch++;
	return temp;
}

//friend 로 넣어야됨.
//int + op 구현
Power operator+(int x, Power& a)
{
	a.kick += x;
	a.punch += x;
	return a;
}

int main()
{
	Power a(20, 20);
	Power b;
	Power c;
	Power d;
	d = 2 + a;
	d.show();
}