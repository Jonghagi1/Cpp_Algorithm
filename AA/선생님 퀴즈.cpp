#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n; // 학생 수
	int card, card_sum = 0;
	int sum_check = 0;
	int arr[11];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &card, &card_sum);
		sum_check = 0;
		for (int j = 1; j <= card; j++)
		{
			sum_check += j;
		}

		if (card_sum == sum_check)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{	
		if (arr[i] == 1)
		{
			printf("YES\n");
		}
		if (arr[i] == 0)
		{
			printf("NO\n");
		}
	}

	return 0;
}