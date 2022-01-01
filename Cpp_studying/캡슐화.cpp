#include<iostream>

using namespace std;

class Date
{	
	int m_month;
	int m_day;
	int m_year;
	
public:				//접근 지정자 (access specifier) // private가 기본
	void setDate(const int &month_input, const int &day_input, const int &year_input) {
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int &month_input) {
		m_month = month_input;
	}

	const int &getDay() {
		return m_day;
	}

	void copyForm(const Date &original) {
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main() {

	Date today;

	today.setDate(1, 1, 2022);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyForm(today);

	cout << copy.getDay();

	return 0;
}