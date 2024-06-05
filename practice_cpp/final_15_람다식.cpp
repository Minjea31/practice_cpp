#include <iostream>
#include <string>
using namespace std;

int main()
{
	//[](int x, int y) { cout << "합은 " << x + y; }(2, 3);

	auto love = [](auto a, auto b)
		{
			cout << a << "보다" << b << "가 좋아." << endl;
		};

	love(2, 3);
	love("너", "돈");
}