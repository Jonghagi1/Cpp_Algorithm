#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

void D(int n)
{
	if (n==0)
	{
		return;
	}
	else
	{
		D(n / 2);
		printf("%d", n % 2);
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//11

	int n;
	
	scanf("%d", &n);

	D(n);

	return 0;
}
//output
//1011