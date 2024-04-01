#include <iostream>
using namespace std;

int main()
{
	int* p;
	p = new int; // int 타입 1개를 할당 받은거임.
	if (!p)
	{
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
}

//여러개를 동적 할당 받을려면
//데이터타입 *포인터변수 = new 데이터타입[배열의 크기];
//배열의 동적할당을 반납할려면
//delete [] 포인터변수;