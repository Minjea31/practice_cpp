#include <iostream>
#include <string>
using namespace std;

int main()
{
	char line[80];
	cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
	cout << "exit을 입력하면 루프가 끝납니다." << endl;
	int no = 1;
	while (true)
	{
		cout << "라인" << no << ">>";
		cin.getline(line, 80);
		int n = cin.gcount(); // 읽은 문자 개수 <Enter>키도 포함
		cout << endl << "읽은 문자 개수 :" << n << endl;
		if (strcmp(line, "exit") == 0)
			break;
		cout << "echo--->";
		cout << line << endl;
		no++;
	}
}