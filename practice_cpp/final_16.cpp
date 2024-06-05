#include <iostream>
using namespace std;

int main()
{
	double pi = 3.14;

	auto clac = [pi](auto r)
		{
			return pi * r * r;
		};

	cout << "¸éÀûÀº" << clac(3);
}