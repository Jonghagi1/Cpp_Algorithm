#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, m;
	int a[101], b[101], c[202];
	int p1 = 0, p2 = 0, p3 = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}

	while (p1 < n && p2 < m)
	{
		if (a[p1]>b[p2])
		{
			c[p3++] = b[p2++]; // c[p3] = b[p2] 실행 한 뒤 p3++, p2++ 실행
		}
		else
		{
			c[p3++] = a[p1++];
		}	
	}

	while (p1 < n)
	{
		c[p3++] = a[p1 ++];
	}
	while (p2<m)
	{
		c[p3++] = b[p2++];
	}

	for (int i = 0; i < p3; i++)
	{
		printf("%d ", c[i]);
	}

	return 0;
}