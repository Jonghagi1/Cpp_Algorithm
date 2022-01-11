#include<iostream>

using namespace std;

class Base
{
public:
	int m_public = 0;
protected:
	int m_protected = 1;
private:
	int m_private = 2;

public:

	void print()
	{
		cout << m_public << endl;
		cout << m_protected << endl;
		cout << m_private << endl;
		
		cout << endl;
	}

};

class Base2 : public Base
{
public:
	void print2()
	{
		cout << m_public << endl;
		cout << m_protected << endl;
		//cout << m_private << endl;
		
		cout << endl;
	}
};

};

class Base3 : protected Base
{
public:
	void print3()
	{
		cout << m_public << endl;
		cout << m_protected << endl;
		//cout << m_private << endl;

		cout << endl;
	}
};

class Base4 : private Base
{
public:
	void print3()
	{
		cout << m_public << endl;
		cout << m_protected << endl;
		//cout << m_private << endl;

		cout << endl;
	}
};

int main()
{
	Base base;
	Base2 base2;

	base.print();
	base2.print2();

	return 0;
}