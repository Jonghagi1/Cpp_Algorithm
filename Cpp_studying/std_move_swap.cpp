#include<iostream>
#include<utility>	

using namespace std;

template<typename T>
void Myswap(T &a, T &b)
{
	T temp = std::move(a);
	a = std::move(b);
	b = std::move(temp);

}

int main()
{
	int a = 10;
	int b = 20;

	cout << a << " " << b << endl;

	Myswap(a, b);

	cout << a << " " << b << endl;

	return 0;
}