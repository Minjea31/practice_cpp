#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	int num =-1;
	int sum = 0;

	while (1)
	{
		cout << "정수를 입력하세요(0을 입력하면 종료) >>";
		cin >> num;


		if (num == 0)
			break;
		else
			v.push_back(num);

		sum = 0;

		vector<int>::iterator it;
		for (it = v.begin(); it != v.end(); it++)
		{
			sum += *it;
		}

		cout << "평균 =";
		cout << (float)sum / v.size();
		cout << endl;
	}
}