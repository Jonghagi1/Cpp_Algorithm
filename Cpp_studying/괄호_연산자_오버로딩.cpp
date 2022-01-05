#include<iostream>

using namespace std;

class Accumulator
{
private:
	int m_count = 0;

public:
	int operator() (int i) // 괄호 연산자 오버로딩, 함수 객체 처럼 사용
	{
		return (m_count += i);
	}
};

int main() {

	Accumulator acc;

	cout << acc(10) << endl; // 10
	cout << acc(100) << endl; // 110

	return 0;
}