#include<iostream>
#include "Storage.h"

using namespace std;

//template<typename T>
//T getMax(T x,T y)
//{
//	return (x > y) ? x : y;
//}
//
//template<> // 함수 템플릿 특수화
//char getMax(char x, char y)
//{
//	cout << "경고 : 문자 입력" << endl;
//
//	return (x > y) ? x : y;
//}

int main() 
{
	//cout << getMax('a','b') << endl;

	Storage<int> iValue(5);
	Storage<double> dValue(6.7);

	iValue.print(); // 5
	dValue.print(); // Double 타입 6.700000e+00

	return 0;
}