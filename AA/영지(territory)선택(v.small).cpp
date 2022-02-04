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
	//input
	//6 7
	//3 5 1 3 1 3 2
	//1 2 1 3 1 1 2
	//1 3 1 5 1 3 4
	//5 1 1 3 1 3 2
	//3 1 1 3 1 1 2
	//1 3 1 3 1 2 2
	//2 3

	int arr[51][51];
	int h, w, n, m;
	int sum;
	int max = -2147000000;
	scanf("%d %d", &h, &w);

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= h-n+1; i++)
	{
		for (int j = 1; j <= w-m+1; j++)
		{
			sum = 0;
			for (int k = i; k < i+n; k++)
			{
				for (int s = j; s < j+m; s++)
				{
					sum = sum + arr[k][s];
				}
			}

			if (sum>max)
			{
				max = sum;
			}
		}
	}

	printf("%d\n", max);

	return 0;
}
//output
//16