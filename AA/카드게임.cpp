#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int a[11];
	int b[11];

	int a_S = 0, b_S = 0;
	int last_win = 0; // 0 - > D // 1 -> a 승 // 2-> b 승 //

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			a_S += 3;
			last_win = 1;
		}
		else if (a[i] < b[i])
		{
			b_S += 3;
			last_win = 2;
		}
		else
		{
			a_S++;
			b_S++;
		}
	}

	printf("%d %d\n", a_S, b_S);

	if (a_S > b_S)
	{
		printf("A");
	}
	else if (a_S < b_S)
	{
		printf("B");
	}
	else
	{
		if (last_win == 1)
		{
			printf("A");
		}
		else if (last_win == 2)
		{
			printf("B");
		}
		else
		{
			printf("D");
		}
	}


	return 0;
}