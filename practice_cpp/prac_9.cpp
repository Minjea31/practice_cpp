#include <iostream>
using namespace std;

class TV
{
	bool on = true;
	int channel = 1;
	int volume = 1;
public:
	//bool Poweron();
	//void Poweroff();
	int incre_channel(int x);
	int decre_channel(int x);
	int incre_volume(int x);
	int decre_volume(int x);
	int show();


};

int TV::incre_channel(int x)
{
	return channel += x;
}

int TV::decre_channel(int x)
{
	return channel -= x;
}

int TV::incre_volume(int x)
{
	return volume += x;
}

int TV::decre_volume(int x)
{
	return volume -= x;
}

int TV::show()
{
	cout << "현재 channel은 " << channel << endl;
	cout << "현재 volum은 " << volume << endl;
	return 0;
}

int main()
{
	TV tel;
	tel.incre_channel(100);
	tel.incre_volume(50);
	
	cout << tel.show() << endl;
}