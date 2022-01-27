#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;			// 경보음 횟수
	int d_num;		// 경보음 울리는 넘버
	int bell;		// 경보음 시간
	int temp = 0;	// 경보음 초과한 연속 횟수
	int max = 0;


	scanf("%d %d", &n, &d_num);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &bell);
		if (bell > d_num)
		{
			temp++;

		}
		else
		{
			temp = 0;
		}

		if (temp > max)
		{
			max = temp;
		}
	}

	if (max > 0)
	{
		printf("%d", max);
	}
	else
	{
		printf("%d", -1);
	}

	return 0;
}