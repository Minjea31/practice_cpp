#include <iostream>
using namespace std;

void showWidth()
{
	cout.width(10); // 다음에 출력을 10칸으로 지정
	cout << "Hello" << endl;
	cout.width(5); // 다음에 출력을 5칸으로 지정
	cout << 12 << endl;

	cout << '%';
	cout.width(10); // 다음에 출력을 10칸으로 지정(단 젤 앞부분만);
	cout << "Korea/" << "Seoul/" << "City" << endl;
}

int main()
{
	showWidth();
	cout << endl;

	cout.fill('^'); // fill()을 적용한 후 width()의 사례를 보여준다.
	showWidth();
	cout << endl;

	cout.precision(5); //precision() 사용 예
	cout << 11. / 3. << endl;
}