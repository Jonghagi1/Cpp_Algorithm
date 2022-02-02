#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int Count(int len, int x[], int size)
{
	int cnt=1, pos = x[1];

	for (int i = 2; i <= size; i++)
	{
		if (x[i] - pos >= len)
		{
			cnt++;
			pos = x[i];
		}
	}

	return cnt;
}

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//5 3
	//1
	//2
	//8
	//4
	//9

	int n, m;
	int lt = 1, rt, mid, res;

	scanf("%d %d", &n, &m);

	int *x = new int[n + 1];

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x[i]);
	}
	sort(x + 1, x + n + 1);

	rt = x[n];

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;

		if (Count(mid, x, n) >= m)
		{
			res = mid;
			lt = mid + 1;
		}
		else
		{
			rt = mid - 1;
		}
	}

	printf("%d", res);

	return 0;
}
//output
//3