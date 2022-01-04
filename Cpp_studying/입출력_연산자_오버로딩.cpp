#include<iostream>
#include<fstream>
#include <string>
#include<istream>

using namespace std;

class Point
{
	int m_x;
	int m_y;

public:
	Point(int x = 0, int y = 0)
		: m_x(x), m_y(y)
	{
		//m_x = x;
	}

	/*
	void print()
	{
		cout << m_x << endl;
	}
	*/

	// ostream -> 출력
	friend std::ostream &operator << (std::ostream &out, const Point &point) // 입출력 연산자 오버로딩
	{
		out << "( " << point.m_x << ", " << point.m_y << " )";

		return out;
	}


	// istream -> 입력
	friend std::istream &operator >> (std::istream &in, Point &point) // 입출력 연산자 오버로딩
	{
		in >> point.m_x >> point.m_y;

		return in;
	}

};


int main() {

	//Point p1(1, 2), p2(100, 50);

	Point p1, p2;

	//cout << p1.print();

	cin >> p1 >> p2; // 10 20 30 40

	cout << p1 << " " << p2; // ( 10, 20 ) ( 30, 40 )


	return 0;
}