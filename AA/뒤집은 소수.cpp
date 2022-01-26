#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int reverse(int x)
{
	int res = 0;
	int temp = 0;

	while (x > 0)
	{
		temp = x % 10;
		res = (res * 10) + temp;
		x = x / 10;
	}

	return res;
}

bool isPrime(int x)
{
	bool flag = true;
	if (x == 1)
	{
		return false;
	}

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}

	return flag;
}

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, num, res;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		res = reverse(num);

		if (isPrime(res) == true)
		{
			printf("%d ", res);
		}
	}

	return 0;
}