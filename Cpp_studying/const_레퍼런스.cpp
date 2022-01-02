#include<iostream>

using namespace std;

class constExample
{
public:
	int m_value = 1;

	void setValue(int value)
	{
		m_value = value;
	}
	int getValue() const
	{
		return m_value;
	}
};

/*
void print(constExample st) // 생성자 사본이 만들어짐
{
	cout << &st << endl;	// 주소가 다름

	cout << st.m_value << endl;
}
*/

void print(const constExample &st) // const 레퍼런스로 받아서 받아온 주소가 같음 (복사하지 않아서 효율적임)
{
	cout << &st << endl; //주소가 같음

	cout << st.m_value << endl;
}

int main() {
	const constExample constEx;

	// constEx.setValue(3);				   // const 선언 때문에 에러

										   // const 함수에서는 멤버의 값을 바꿀 수 없음

	// cout << constEx.getValue() << endl; // 에러 class에서 const라고 바꾸지 않는다고 선언해야함

	cout << constEx.getValue() << endl;

	cout << &constEx << endl;

	print(constEx);

	return 0;
}