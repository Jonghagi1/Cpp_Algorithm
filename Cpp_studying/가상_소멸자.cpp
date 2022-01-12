#include<iostream>

using namespace std;

class Base
{
public:
	virtual ~Base() // virtual 가상 소멸자
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;
public:

	Derived(int length)
	{
		m_array = new int[length];
	}

	virtual ~Derived()
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5);

	Derived *derived = new Derived(5); // 동적할당
	Base *base = derived;

	delete base; // 가상 소멸자를 사용함으로써 자식 클래스의 함수도 없앨 수 있음

	return 0;
}