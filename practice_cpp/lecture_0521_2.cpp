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
	T &pop();
	void show()
	{
		for (int i = tos; i >= 0; i--)
		{
			cout << data[i] << endl;
		}
	}
};

template <class T>
MyStack<T>::MyStack()
{
	tos = -1;
}

template <class T>
void MyStack<T>::push(T element) 
{
	if (tos == 99) 
	{
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T &MyStack<T>::pop()
{
	T retData;
	if (tos == -1)
	{
		cout << "stack empty";
		return 0;
	}
	retData = data[tos--];
	return retData;
}

int main() 
{
	MyStack<int> iStack;
	iStack.push(9);
	iStack.push(7);
	iStack.push(5);
	iStack.push(1);
	iStack.push(3);

	iStack.show();
}