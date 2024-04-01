#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 11; j < 20; j++)
		{
			for (int k =3*i + 11; k <3*i+ 14; k++)
			{
				cout << k << "*" << j << "=" << j * k << "\t";
			}
			cout << endl;
		}

		cout << endl << endl;
	}
}

//11~19´Ü °ö¼ÁÇ¥¸¦ 3Çà 3¿­·Î Ãâ·Â.