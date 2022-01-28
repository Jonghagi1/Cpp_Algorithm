#include<iostream>
#include<stdio.h>
#include<vector>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int pre, now;
	int n;
	int cnt = 1, max = 1;
	
	scanf("%d", &n);
	scanf("%d", &pre);

	for (int i = 1; i < n; i++)
	{
		scanf("%d", &now);
		if (now>=pre)
		{
			cnt++;
			if (cnt > max)
			{
				max = cnt;
			}
		}
		else
		{
			cnt = 1;
		}
		pre = now;
	}

	printf("%d", max);
	

	return 0;
}