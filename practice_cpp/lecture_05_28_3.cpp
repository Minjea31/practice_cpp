#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	map<string, string> dic;

	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과"));
	dic["cherry"] = "체리";
	cout << "저장된단어개수" << dic.size() << endl;

	string eng;

	for_each(dic.begin(), dic.end(), [](auto dic) {cout << dic.first << dic.second << endl; });
}