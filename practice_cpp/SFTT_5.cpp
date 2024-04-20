#include <iostream>
using namespace std;

int main()
{
	cout << "영문 텍스트를 입력하시오 : " << endl << "끝은 ; 입니다." << endl;
	int num = 0;
	int	alphabet[27] = { 0 };
	char alpha[1000] = { 0 };

	cin.getline(alpha, 1000, ';');
	for (int i = 0; i < strlen(alpha); i++)
	{
		if (isalpha(tolower(alpha[i])) != 0) //소문자로 만드는 코드
		{
			++alphabet[alpha[i] - 97]; //알파벳 순서에 맞게 갯수 증가.
			++num;
		}
	}

	cout << "알파벳의 수 : " << num << endl;
	for (int i = 0; i < 26; i++)
	{
		char asr = i + 'a'; // 영어 단어 하나
		cout << asr << "(" << alphabet[i] << ")";
		for (int j = 0; j < 4 - alphabet[i] / 10; ++j)
			cout << " ";
		cout << ":";
		for (int j = 1; j < alphabet[i]; j++)
			cout << "*";
		cout << endl;
	}
}