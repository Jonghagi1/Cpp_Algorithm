#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char str[21];

	cin >> str;

	for (int i = 0; str[i] != NULL; i++)
	{
		cout << "'" << str[i] << "'" << endl;
	}


	return 0;
}