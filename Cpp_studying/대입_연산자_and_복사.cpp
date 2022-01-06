#include<iostream>
#include<cassert>

using namespace std;

class MyString
{
//private:
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char *source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1; // 마지막 NULL칸을 위해 + 1
		m_data = new char[m_length];		// 동적할당

		for (int i = 0; i < m_length; i++)
		{
			m_data[i] = source[i];			// 복사
		}

		m_data[m_length - 1] = '\0';		// 문자열 마지막이 NULL 이라는 표현

	}

	MyString(const MyString &source)
	{
		cout << "복사 생성자" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr) // 메모리를 갖고 있을 경우
		{
			m_data = new char[m_length]; // 메모리 새로 할당

			for (int i = 0; i < m_length; i++)
			{
				m_data[i] = source.m_data[i]; // source가 가지고 있는 것을 m_data에 복사함
			}
		}
		else
		{
			m_data = nullptr; 
		}
	}

	MyString &operator = (const MyString &source) // 대입 연산자 오버로딩
	{
		cout << "대입 연산자" << endl;

		if (this == &source) // 자기 자신 할당 방지
		{
			return *this;
		}

		delete[] m_data;

		if (source.m_data != nullptr) // 메모리를 갖고 있을 경우
		{
			m_data = new char[m_length]; // 메모리 새로 할당

			for (int i = 0; i < m_length; i++)
			{
				m_data[i] = source.m_data[i]; // source가 가지고 있는 것을 m_data에 복사함
			}
		}
		else
		{
			m_data = nullptr;
		}
	}
	
	~MyString() // 소멸자(생성자 생성 한 뒤 메모리를 위해 소멸자 선언)ㄴ
	{
		delete[] m_data;
	}

	char *getString() { return m_data; }
	int getLength() { return m_length; }
};

int main() {

	MyString hello("Hello");

	MyString str1(hello); // 만들어지는 순간이기 때문에 복사 생성자 호출

	MyString str2;
	str2 = hello;

	cout << (int *)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello;				// copy는 복사 생성자
		cout << (int *)copy.m_data << endl;
		cout << copy.getString() << endl;
	}

	cout << hello.getString() << endl;

	return 0;
}