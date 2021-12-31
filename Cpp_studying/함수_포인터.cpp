#include<iostream>
#include<array>

using namespace std;

bool isOdd(const int &num) {
	if (num % 2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEven(const int &num) {
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void printNum(const array<int, 10> &m_array, bool (*checkFunc)(const int &)) { // 함수 포인터 checkFunc 사용
	for (int elements : m_array) {
		if (checkFunc(elements) == true)
		{
			cout << elements;
		}
	}
	cout << endl;
}

int main() {

	array<int, 10> m_array{ 0,1,2,3,4,5,6,7,8,9 };

	printNum(m_array, isOdd); // 13579
	printNum(m_array, isEven); // 02468


	return 0;
}