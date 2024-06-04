#include <iostream>
using namespace std;

template <class T>
class MyStack
{
    int tos;
    T data[100];
public:
    MyStack();
    void push(T element);
    T pop();
};

template <class T>
MyStack<T>::MyStack()
{
    tos = -1;
}

template<class T>
void MyStack<T>::push(T element)
{
    if (tos == 99)
    {
        cout << "stack full" << endl;
        return;
    }
    data[++tos] = element;
}

template<class T>
T MyStack<T>::pop()
{
    if (tos == -1)
    {
        cout << "stack empty" << endl;
        return T(); // 디폴트 값을 반환합니다.
    }
    return data[tos--];
}

int main()
{
    MyStack<int> iStack;
    iStack.push(3);
    cout << iStack.pop() << endl;

    MyStack<double> dStack;
    dStack.push(3.5);
    cout << dStack.pop() << endl;

    MyStack<char>* p = new MyStack<char>();
    p->push('a');
    cout << p->pop() << endl;
    delete p;

    return 0;
}
