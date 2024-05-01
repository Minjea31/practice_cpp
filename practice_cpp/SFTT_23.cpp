#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

class Person
{
	int num;
	string* person;
public:
	Person(int n)
	{
		num = n;
		person = new string[n];
	}
	~Person()
	{
		delete[] person;
	}
	void setperson();
	string getName(int index);
};

string Person::getName(int index)
{
	return person[index];
}

void Person::setperson()
{
	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << "번 이름을 입력하시오 : ";
		cin >> person[i];
	}
}

class UpAndDownGame
{
	static int number;
	static void startGame();

};
static int number = 0;


static void StartGame(Person group)
{
	int what =100;
	int i = 0;
	while (number != what)
	{
		
		if (i > 2)
			i = i % 2;
		cout << group.getName(i) << ">>";
		cin >> number;
		i += 1;

		if (number == what)
		{
			cout << group.getName(i) << "가 이겼습니다!";
			break;
		}
	}
}

int main()
{

	srand((unsigned int)time(NULL));
	Person group(2);
	group.setperson();
	StartGame(group);
}