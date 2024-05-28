#include <iostream>
#include <vector>
#include <algorithm> // for_each() 알고리즘함수를사용하기위함
using namespace std;

void print(int n) { cout << n*n << " "; }

int main() 
{
	vector<int> v = { 1, 2, 3, 4, 5 };
	for_each(v.begin(), v.end(), print); cout << endl;
	for_each(v.begin(), v.end(), [](int n) { cout << n*n << " "; }); cout << endl;
	for_each(v.begin(), v.end(), [](auto n) { cout << n*n << " "; }); cout << endl;
}