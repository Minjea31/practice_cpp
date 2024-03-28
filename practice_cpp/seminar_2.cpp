#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOFApples;
	int myMoney;

public:
	
	FruitSeller(int price, int num, int money)
		:APPLE_PRICE(price),numOFApples(num),myMoney(money)
	{
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOFApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSalesResult()
	{
		cout << "남은 사과: " << numOFApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};


class FruitBuyer
{
	int myMoney;
	int numOFApples;

public:

	FruitBuyer(int money)
		: myMoney(money), numOFApples(0)
	{
	}

	void BuyApples(FruitSeller &seller, int money)
	{
		numOFApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOFApples << endl << endl;
	}

};

int main()
{
	FruitSeller seller;
	sFruitSeller(1000, 20, 0);
	FruitBuyer buyer;
	buyer.FruitBuyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}

//생성자를 더 간단히 - 멤버 이니셜라이저(위임 생성자)로 초기화 간단히 가능