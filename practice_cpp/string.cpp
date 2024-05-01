#include <iostream>
#include <string>
#include <locale> // 문자를 다루는 기능.

using namespace std;

int main()
{
	string input;
	getline(cin, input, '&');
	cin.ignore();  //마지막에 오는 엔터키 삭제하는 코드.

	string s = "abcde";
	string adder = "abcde";
	string new_s;

	s.append(adder); //합치는 함수
	cout << s << endl;


	int num = 0;
	num = s.length(); //문자열 길이 반환
	cout << num << endl;

	num = s.at(2); //위치의 문자 반환
	cout << num << endl;

	num = s.find("abc"); // abc를 발견한 처음 인덱스 반환
	cout << num << endl;

	num = s.compare("abc"); //일치하면 0, 현재문자열이 앞에오면 음수, 반대는 양수
	cout << num;

	new_s = s.substr(1,4); // 첫번째 인자부터 뒤 인자 수만큼 새로운 스크링 생성 및 리턴.

	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//

	// <locale>

	string test = "Hello";

	for (int i = 0; i < test.length(); i++)
		test[i] = toupper(test[i]);

	cout << test << endl;

	for (int i = 0; i < test.length(); i++)
		test[i] = tolower(test[i]);
	
	cout << test << endl;

	// isdigit(test[i]) 숫자인지 // isalpha(test[i]) 영어인지



}