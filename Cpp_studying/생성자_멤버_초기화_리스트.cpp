#include<iostream>

using namespace std;

class Other {
private:
	int m_o;

public:
	Other(const int &m_o_input)
		: m_o(m_o_input)
	{
		//cout << m_o << endl;
	}
};

class Something {
private:
	int m_i = 1;
	double m_d;
	char m_c;
	int m_arr[3]; // = { 1,2,3 }; { } 중괄호 초기화는 배열 선언 때만 가능
	
	Other m_o;

public:
	Something()		// Member Initializer List
		: m_i(100), // 생성자 멤버 초기화 리스트, 생성자가 초기화 우선순위가 높음
		m_d(3.14), 
		m_c('a') , 
		m_arr{ 1, 2, 3 }, 
		m_o(m_i - 10) 
	{
		m_i *= 3;
		//m_d = 3.14;
		//m_c = 'a';
	}

	void print() {
		cout << m_i << " " << m_d << " " << m_c << endl;

		for (auto &e : m_arr) {
			cout << e << " ";
		}
		cout << endl;
	}
};

int main() {

	Something som;
	som.print();

	return 0;
}