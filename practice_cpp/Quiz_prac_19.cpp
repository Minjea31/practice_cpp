#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random
{
	int num;
public:
	int next();
	int nextInRange(int a, int b);
};

int Random::next()
{
	int n = (rand() % RAND_MAX)/2+ 2;
	return n;
}

int Random::nextInRange(int a, int b)
{
	int n = rand() % (b-a+1) + 2;
	return n;
}

int main()
{
	srand((unsigned int)time(NULL));
	Random r;
	cout << "--0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 4까지의 핸덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}