#include <iostream>
using namespace std;

class IntVec
{
	int x, y;
public:
	IntVec(int a = 0, int b = 0) : x(a), y(b) {}
	void Show()
	{
		cout << "(" << x << " " << y << ")" << endl;
	}

	//µ¡¼À
	IntVec operator+ (IntVec op);
	//°ö¼À
	IntVec operator* (IntVec op);
	//Á¤¼ö¿Í °ö¼À
	friend IntVec operator*(int q, IntVec op);
	IntVec operator^(int q);
	friend IntVec operator-(IntVec op);
	IntVec operator+=(IntVec op);
	bool operator == (IntVec op);
};

IntVec IntVec::operator+(IntVec op)
{
	IntVec temp;
	temp.x = this->x + op.x;
	temp.y = this->y + op.y;
	return temp;
}

IntVec IntVec::operator*(IntVec op)
{
	this->x = this->x * op.x;
	this->y = this->y * op.y;
	return *this;
}

IntVec operator*(int q, IntVec op)
{
	IntVec temp;
	temp.x = op.x * q;
	temp.y = op.y * q;
	return temp;
}

IntVec IntVec::operator^(int q)
{
	IntVec temp(1, 1);
	for (int i = 0; i < q; i++)
	{
		temp.x *= this->x;
		temp.y *= this->y;
	}

	return temp;
}

IntVec operator-(IntVec op)
{
	op.x = -op.x;
	op.y = -op.y;

	return op;
}

IntVec IntVec::operator+=(IntVec op)
{
	this->x = this->x + op.x;
	this->y = this->y + op.y;

	return *this;
}

bool IntVec::operator == (IntVec op)
{
	if (this->x == op.x && this->y == op.y)
	{
		return true;
	}
	else
		return false;
}



int main()
{
	IntVec A(2, 3), B(4, 5);
	cout << "A = ";
	A.Show();
	cout << "B = ";
	B.Show();

	//Stage 1
	IntVec C = A + B;
	cout << "A + B = ";
	C.Show();
	IntVec D = 2 * A * B;
	cout << "2 * A * B = ";
	D.Show();

	//Stage 2
	IntVec E = A ^ 3;
	cout << "A ^ 3 = ";
	E.Show();
	IntVec F = -A;
	cout << "-A = ";
	F.Show();

	//Stage 3
	A += B;
	cout << "(A += B) = ";
	A.Show();
	if (A == IntVec(6, 8))
		cout << "OK" << endl;
	else
		cout << "Error" << endl;
}