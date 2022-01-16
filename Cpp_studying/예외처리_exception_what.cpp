#include<iostream>
#include<exception>
#include<string>

using namespace std;

int main()
{
	try
	{
		string s;
		s.resize(-1);
	}
	catch (const std::exception & exception)
	{
		cout << exception.what() << endl;
	}

	return 0;
}