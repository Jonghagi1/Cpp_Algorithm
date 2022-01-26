#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);//

	int n, cnt = 0, temp;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		temp = i;
		while (1)
		{
			if (temp / 10 > 0)
			{
				cnt++;
				temp = temp / 10;
			}
			else
			{
				cnt++;
				break;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}