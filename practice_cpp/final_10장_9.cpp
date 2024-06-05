#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num;

	double sum = 0;
	while (true)
	{
		int temp;
		cin >> temp;
		if (temp != 0)
		{
			num.push_back(temp);
			sum += temp;
		}
		else
		{
			break;
			cout << "종료합니다.";
		}
		for (auto it = num.begin(); it < num.end(); it++)
		{
			cout << *it << ' ';
		}
		cout << (double)sum / num.size() << endl;

	}
}