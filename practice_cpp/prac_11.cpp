//랜덤 값 호출
#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>


class Random
{
public:
	Random();
	int next();
	int nextinRange(int a, int b);

};


Random::Random()
{

}

int Random::next()
{
	return rand();
}


int Random::nextinRange(int a, int b)
{
	return rand() % (b - a + 1) + a;
}


int main()
{
	srand((unsigned int)time(NULL));

	Random r;
	cout << "-0에서" << RAND_MAX << "까지의 랜덤 정수 10개-" << endl;
	for (int i=0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-2에서" << "4까지의 랜덤 정수 10개-" << endl;
	for (int j = 0; j < 10; j++)
	{
		int n = r.nextinRange(2, 10);
		cout << n << " ";
	}
	cout << endl;
}

/*
rand()%a ==> 0부터 a-1까지 범위의 난수를 받는다.
rnad()%a+3 ==> 3부터 a+2까지의 범위의 난수를 받는다.
rand()%b+a ==> a부터 (b-1)+a의 범위를 받는다.
rand() % (b - a + 1) + a ==> a부터 b까지*/