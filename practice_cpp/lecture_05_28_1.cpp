#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//[](int x, int y) {cout << "합은" << x + y << endl; }(2, 3);

	//auto love = [](string a, string b)
	//	{
	//		cout << a << "보다 " << b << "가 좋아" << endl;
	//	};

	//love("돈", "너");;
	//love("냉면", "만두");

	//int a = 12;
	//int b = 12;

	//auto cal = [a, b](int r) -> double {return a * b * r; };

	//cout << cal(2);

	vector <int> v = { 1,2,3,4,5 };
	//알고리즘 내 함수임.
	for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });

}