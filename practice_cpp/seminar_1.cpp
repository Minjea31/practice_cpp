#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

//enum : #define 외에

class Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void showCarState();
	void Accel();
	void Break();
};

void Car::showCarState()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= FUEL_STEP;

	if (curSpeed + ACC_STEP >= MAX_SPD)
	{
		curSpeed = MAX_SPD;
		return;
	}

	curSpeed += ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= BRK_STEP;
}

//함수를 외부에 정의할려면 구조체명:: 붙여줘야함.

int main()
{
	Car run99 = { "run99", 100, 0 }; //구조체 초기화
	run99.Accel();
	run99.Accel();
	run99.showCarState();
	run99.Break();
	run99.showCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.showCarState();
	return 0;
}