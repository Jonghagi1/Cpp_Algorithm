#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;


int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//31 16

	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";

	scanf("%d %d", &n, &k);

	while (n>0)
	{
		s.push(n % k);
		n = n / k;
	}

	while (!s.empty())
	{
		printf("%c", str[s.top()]);
		s.pop();
	}

	return 0;
}
//output
//1F