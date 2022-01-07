#include<iostream>
#include<initializer_list>

using namespace std;

class intArray
{
private:
	unsigned m_length = 0;
	int *m_data = nullptr;

public:
	intArray(unsigned length)
		: m_length(length)
	{
		m_data = new int[length];
	}

	intArray(const std::initializer_list<int> &list)
		: intArray(list.size())
	{
		int count = 0;
		for (auto & elements : list)
		{
			m_data[count] = elements;
			count++;
		}
	}

	~intArray()
	{
		delete[] this->m_data;
	}

	friend ostream &operator << (ostream &out, intArray &arr)
	{
		for (unsigned i = 0; i < arr.m_length; i++)
		{
			out << arr.m_data[i] << " ";
		}
		out << endl;

		return out;
	}
};

int main() {

	int my_arr[5] = { 1,2,3,4,5 };
	int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto init = { 10,20,30 };

	intArray int_array{ 1,2,3,4,5 };
	cout << int_array << endl;



	return 0;
}