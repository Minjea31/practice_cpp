#include <iostream>
using namespace std;

int main()
{
	char qwe[10];

	cout << "문자열을 입력하시오 :";
	cin.getline(qwe, 10, 'q');
	cout << qwe;
}

// 그냥 cin 하면 띄워쓰기 즉, space를 누르면 그 전 문자열까지만 입력이 되지만 
// cin.getline(입력받을 배열이름, 개수, '\n')하면 엔터를 누를때 까지 입력을 받는다.
//이때 엔터에서 끝나는 이유는 '\n'때문이다.