#include<iostream>

using namespace std;

class intArray {
private:
	int *m_arr = nullptr;
	int m_length = 0;
public:
	intArray(const int &length_in) {
		m_length = length_in;
		m_arr = new int[m_length];

		cout << "생성자" << endl;
	}
	
	int getLength() {
		return m_length;
	}

	~intArray() {		// 소멸자, vector 내부에는 소멸자 매커니즘이 구현 되어있음
		delete[] m_arr;
	}
};

int main() {

	while (true)
	{
		intArray my_arr(10000);
	}


	return 0;
}