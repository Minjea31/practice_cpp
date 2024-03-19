#include <iostream>
using namespace std;

int main()
{
	cout << "문자열을 입력하시오 :";
	
	char name[11];

	cin >> name;

	cout << name;
}

/*cin.getline -> 문자열이 초과할경우 잘라서 입력
  cin -> 출력되나 오류가 발생.*/