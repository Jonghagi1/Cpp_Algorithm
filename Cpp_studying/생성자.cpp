#include<iostream>

using namespace std;

class Fraction {
public:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int &num_input, const int &denom_input) { // 생성자 ( Constructors )
		m_numerator = num_input;
		m_denominator = denom_input;
	}

	void print() {
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

int main() {
	Fraction frac(1, 2); // 생성자 호출 // 파라미터가 없으면 Fraction frac 으로 호출

	frac.print();		 // 1 / 2


	return 0;
}