#include <iostream>
#include <string>


using namespace std;

int main() 
{
	char line[81];
	cout << "getline(cin, string) 함수로 라인을 읽습니다."
		<< endl;
	cout << "exit를 입력하면 루프가 끝납니다." << endl;
	int no = 1; // 라인 번호
	while (true) {
		cout << "라인 " << no << " >> ";
		cin.getline(line, 81);
		if (line == "exit")
			break;
		cout << "echo --> ";;
		cout << line << endl; // 읽은 라인을 화면에 출력
		no++; // 라인 번호 증가
	}
}