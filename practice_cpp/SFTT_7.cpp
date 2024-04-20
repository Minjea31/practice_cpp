#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
	int year = 0;
	int month = 0;
	int day = 0;

public:
	Date(int a, int b, int c)
	{
		year = a;
		month = b;
		day = c;
	}
	Date(string a);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

Date::Date(string a)
{
	year = stoi(a.substr(0, 4)); // substr : 문자열 자르기 // stoi : 문자열을 정수로 반환
	month = stoi(a.substr(5, 7));
	day = stoi(a.substr(7, 10));
}
void Date::show()
{
	cout << year << "년" << month << "월" << day << "일" << endl;
}

int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}