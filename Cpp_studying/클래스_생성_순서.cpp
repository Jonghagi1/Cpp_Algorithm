#include<iostream>

using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int &i_in = 0) // = 0 을 해줌으로 디폴트 생성자 까지 만들어짐
		:m_i(i_in)
	{
		cout << "Mother 생성자" << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		: Mother(1024), m_d(5.0)
	{
		//m_i = 1024;
		cout << m_i << endl;
		cout << "Child 생성자" << endl;
	}
};

int main()
{

	Child c1; //Mother 생성자
			  //1024
			  //Child 생성자
	return 0;
}