#include<iostream>

using namespace std;

class Calc {
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{

	}

	Calc &add(int value)
	{
		m_value += value;
		return *this;		// this 포인터를 이용해서 자기 자신을 호출
	}
	Calc &sub(int value)
	{
		m_value -= value;
		return *this;		// this 포인터를 이용해서 자기 자신을 호출
	}
	Calc &mul(int value)
	{
		m_value *= value;
		return *this;		// this 포인터를 이용해서 자기 자신을 호출
	}

	void print()
	{
		cout << m_value << endl;
	}
};

int main() {

	Calc cal(10);
	cal.add(100).sub(10).mul(2).print(); // this 포인터를 이용한 연쇄 호출 (Member function chaining) 기법
	// 200


	return 0;
}