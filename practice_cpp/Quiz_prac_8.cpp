#include <iostream>
#include <string>
using namespace std;

class Account
{
	string name;
	int money;
	int id;

public:
	Account();
	Account(string a, int b, int c);
	void deposit(int a);
	int withdraw(int a);
	string getOwner();
	int inquiry();
};

Account::Account()
{

}

Account::Account(string a, int b, int c)
{
	name = a;
	id = b;
	money = c;
}


void Account::deposit(int a)
{
	money += a;
}

int Account::withdraw(int a)
{
	money -= a;
	return money;
}

string Account::getOwner()
{
	return name;
}

int Account::inquiry()
{
	return money;
}



int main()
{
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}