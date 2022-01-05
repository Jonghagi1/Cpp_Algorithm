#include<iostream>
#include<assert.h>
using namespace std;

class Fraction {
public:
	int m_numerator;
	int m_denominator;

public: // explicit 정확하게 입력해라는 의미
	explicit Fraction(int num = 0, int den = 1) // 디폴트 값을 초기화 해줬기 때문에 매개변수(파라미터)를 한개만 넣어도 됨.
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) // 복사 생성자
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "복사 생성자 호출" << endl;
	}

	friend std::ostream &operator << (std::ostream &out, const Fraction &frac)
	{
		out << frac.m_numerator << " / " << frac.m_denominator << endl;

		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main() {
	Fraction frac(5);

	// doSomething(5); // explicit 사용 시 사용 불가
	doSomething(frac); // 복사 생성자 호출
					   // 5 / 1


	return 0;
}