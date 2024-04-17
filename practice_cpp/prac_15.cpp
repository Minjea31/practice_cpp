#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "문자열을 입력하세요(한글 안됨) " << endl;
	getline(cin, s, '\n'); // 문자열 입력
	int len = s.length(); // 문자열의 길이
	char first;

	for (int i = 0; i < len; i++) 
	{

		first = char(s[0]);

		if ((first >= 'a' && first <= 'z') || (first >= 'A' && first <= 'Z'))
		{
			string first = s.substr(0, 1);
			string sub = s.substr(1, len - 1); 
			s = sub + first; 
			cout << s << endl;
		}

		else
		{
			string first = s.substr(0, 2); 
			string sub = s.substr(2, len - 2); 
			s = sub + first; 
			cout << s << endl;
		}

		/*else if (s.substr(0, 1) == " ")
		{
			string first = s.substr(0, 1); 
			string sub = s.substr(1, len - 1); 
			s = sub + first; 
			cout << s << endl;
		}*/
	}
}

// 한글과 영어 함께 입력을 하여 하나씩 앞으로 이동시키기 