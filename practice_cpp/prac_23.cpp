#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	void setRadius(int radius)
	{
		this->radius = radius;
	}
	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

int main()
{
	int num;
	cout << "생성할 원의 갯수를 입력하시오 : ";
	cin >> num;

	Circle *pArray = new Circle[num];

	for (int i = 0; i < num; i++)
	{
		int rad;
		cout << "원" << i + 1 << "의 반지름 : ";
		cin >> rad;

		pArray[i].setRadius(rad);
	}


	int count = 0;
	Circle* p = pArray;

	for (int i = 0; i < num; i++)
	{
		if ( 100 <= pArray[i].getArea() && pArray[i].getArea() <= 200)
			count += 1;
		p++;
	}

	cout << "100보다 크고 200 보다 작은 원의 개수는 " << count;

	delete[] pArray;
}