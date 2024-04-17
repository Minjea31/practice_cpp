#include <iostream>
using namespace std;


class Matrix
{
	int data[4] = { 0 };
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
	{
		data[0] = a;
		data[1] = b;
		data[2] = c;
		data[3] = d;
	}

	void show();
	Matrix& operator += (Matrix op2);

	Matrix operator + (Matrix op2);

	bool operator== (Matrix op2);
};

void Matrix::show()
{
	cout << "(";
	for (int i = 0; i < 4; i++)
	{
		cout << " " << data[i] << " ";
	}
	cout << ")";
	cout << endl;
}

Matrix& Matrix::operator+=(Matrix op2)
{

	
	data[0] = data[0] + op2.data[0];
	data[1] = data[1] + op2.data[1];
	data[2] = data[2] + op2.data[2];
	data[3] = data[3] + op2.data[3];
	return *this;
}

Matrix Matrix::operator+(Matrix op2)
{
	Matrix temp(0,0,0,0);

	temp.data[0] = data[0] + op2.data[0];
	temp.data[1] = data[1] + op2.data[1];
	temp.data[2] = data[2] + op2.data[2];
	temp.data[3] = data[3] + op2.data[3];
	return temp;
}

bool Matrix::operator== (Matrix op2)
{
	if (data[0] == op2.data[0] && data[1] == op2.data[1] && data[2] == op2.data[2] && data[3] == op2.data[3])
	{
		return true;
	}
	else
		return false;
}


int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); 
	b.show(); 
	c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}
