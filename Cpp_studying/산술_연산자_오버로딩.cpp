#include<iostream>

using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents()
	{

	}

	Cents(int cents) // Cents(int cents = 0) 으로 오버로딩 가능
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int &getCents()
	{
		return m_cents;
	}
};

/*
Cents add(const Cents &c1, const Cents &c2)
{
	return Cents (c1.getCents() + c2.getCents());
}
*/

Cents operator + (const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());
}


int main()
{
	Cents cents1(5);
	Cents cents2(10);

	/*
	cout << add(cents1,cents2).getCents() << endl;
	*/

	cout << (cents1 + cents2 + Cents(100)).getCents() << endl; // Cents(100) -> 익명 객체 사용


	return 0;
}