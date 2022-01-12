#include<iostream>

using namespace std;

class A
{
public:
	virtual void print()		// 가상 함수 virtual 사용 // 자식 클래스에 오버라이딩 함수가 있는지 확인
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	virtual void print()
	{
		cout << "B" << endl;
	}
};

class C : public B
{
public:
	virtual void print()
	{
		cout << "C" << endl;
	}
};

class D : public C
{
public:
	virtual void print()
	{
		cout << "D" << endl;
	}
};

int main() {

	A a;
	B b;
	C c;
	D d;

	//A &ref = b; 
	//ref.print();  // reference가 A 이기 때문에 A 출력

	A &ref = c;		
	ref.print();	// virtual 때문에 C 출력

	B &ref2 = d;
	ref2.print();   // virtual 때문에 D 출력

	return 0;
}