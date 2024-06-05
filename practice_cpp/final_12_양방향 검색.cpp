#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, string> dic;

    // 단어와 번역을 추가
    dic.insert(make_pair("love", "사랑"));
    dic.insert(make_pair("apple", "사과"));
    dic["cherry"] = "체리";

    cout << "저장된 단어 개수: " << dic.size() << endl;
    string input;

    while (true)
    {
        cout << "찾고 싶은 단어 (키 또는 값) >> ";
        getline(cin, input);

        if (input == "exit")
            break;

        bool found = false;

        // 키로 검색
        if (dic.find(input) != dic.end()) {
            cout << dic[input] << endl;
            found = true;
        }
        else {
            // 값으로 검색
            for (const auto& pair : dic) {
                if (pair.second == input) {
                    cout << pair.first << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << "없음" << endl;
        }
    }
    cout << "종료합니다" << endl;
}
