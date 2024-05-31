#include <iostream>
using namespace std;

class Matrix
{
    int x, y, z, w;

public:
    Matrix()
    {
        this->x = 0;
        this->y = 0;
        this->z = 0;
        this->w = 0;
    }
    Matrix(int x, int y, int z, int w)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
    }
    Matrix(int a[4])
    {
        this->x = a[0];
        this->y = a[1];
        this->z = a[2];
        this->w = a[3];
    }

    friend ostream& operator << (ostream& stream, Matrix p);
    Matrix operator * (Matrix a);
    Matrix& operator += (Matrix a);
    bool operator == (Matrix a);
};

ostream& operator << (ostream& stream, Matrix p)
{
    stream << '[' << p.x << ' ' << p.y << "; " << p.z << ' ' << p.w << ']';
    return stream;
}

Matrix Matrix::operator * (Matrix a)
{
    Matrix temp;
    temp.x = this->x * a.x + this->y * a.z;
    temp.y = this->x * a.y + this->y * a.w;
    temp.z = this->z * a.x + this->w * a.z;
    temp.w = this->z * a.y + this->w * a.w;
    return temp;
}

Matrix& Matrix::operator += (Matrix a)
{
    this->x += a.x;
    this->y += a.y;
    this->z += a.z;
    this->w += a.w;
    return *this;
}

bool Matrix::operator == (Matrix a)
{
    if (this->x == a.x && this->y == a.y && this->z == a.z && this->w == a.w)
    {
        return true;
    }
        
}

int main()
{
    Matrix a(1, 2, 3, 4), b(1, 2, 1, 1);
    cout << "a=" << a << "\t" << "b=" << b << endl;

    Matrix c = a * b;
    c += a;
    cout << "c=" << c << endl;

    int v[4] = { 4, 6, 10, 14 };
    Matrix d(v);
    cout << "d=" << d << endl;
    if (c == d) {
        cout << "ok\n";
    }
}
