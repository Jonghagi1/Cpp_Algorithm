#pragma once

#include<iostream>

using namespace std;

template <class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{

	}

	void print()
	{
		cout << m_value << endl;
	}
};

template<>
void Storage<double>::print() // 멤버 함수를 특수화 할 떄
{
	cout << "Double 타입 ";
	cout << scientific << m_value << endl;

}