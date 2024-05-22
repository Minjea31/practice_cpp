#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class MyStack {
    int tos;
    vector<T> data;
public:
    MyStack();
    virtual ~MyStack() {}
    bool push(T n);
    bool pop(T& n);
    int size() { return tos + 1; } // tos는 현재 스택에서 가장 위를 가리키는 인덱스
    void show() 
    {
        for (int i = tos; i >= 0; i--) cout << data[i] << endl;
    }
};

int main() 
{
    MyStack a<int>;
    a.push(9); a.push(7); a.push(5); a.push(1); a.push(3);
    a.show();
}