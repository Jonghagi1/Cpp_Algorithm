#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;
	int pos;

	scanf("%d", &n);

	vector<int> is(n+1); // 1부터 시작해야하므로
	vector<int> os(n+1); // 1부터 시작해야하므로

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &is[i]);
	}

	for (int i = n; i >= 1; i--)
	{
		pos = i;
		for (int j = 1; j <= is[i]; j++)
		{
			os[pos] = os[pos + 1];
			pos++;
		}
		os[pos] = i;
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", os[i]);
	}


	return 0;
}