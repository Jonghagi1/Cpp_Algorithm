#include<iostream>

using namespace std;

class Something
{
public:
	// static int m_value = 1; // static 멤버는 이니셜라이징 할 수 없음
	// static const int sc_value = 1; // const라서 값을 초기화 해줘야함, 값 수정 불가능
	static int s_value;
};

int Something::s_value = 1;

int main()
{
	Something st1;
	Something st2;

	st1.s_value = 2;

	// static 멤버라서 주소와 값이 같음
	// 메모리에 정적을 존재하기 때문에
	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;
	
	return 0;
}