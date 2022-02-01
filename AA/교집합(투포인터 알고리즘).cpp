#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, m;
	int ap = 0, bp = 0, cp = 0;

	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());

	scanf("%d", &m);
	vector<int> b(m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());

	vector<int> c(n + m);

	while (ap < n && bp < m)
	{
		if (a[ap]==b[bp])
		{
			c[cp++] = a[ap++];
			bp++;
		}
		else if(a[ap] < b[bp])
		{
			ap++;
		}
		else
		{
			bp++;
		}
	}

	for (int i = 0; i < cp; i++)
	{
		printf("%d ", c[i]);
	}

	return 0;
}