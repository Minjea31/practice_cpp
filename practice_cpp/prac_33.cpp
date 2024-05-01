#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <ctime>
int main() {
    srand((unsigned)time(0));

    cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;
    string text;

    for (;;) {
        cout << ">>";
        getline(cin, text);
        if (text == "exit") 
            break;

        int index = rand() % text.length();
        char r = rand();

        if (r % 2 == 0)
            r = rand() % (122 - 97 + 1) + 97;

        else
            r = rand() % (90 - 65 + 1) + 65;

        text[index] = r;
        cout << text << endl;
    }

}