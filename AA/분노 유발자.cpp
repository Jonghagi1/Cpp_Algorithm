#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n; // 학생 수
	int arr[101];
	int max = -2147000000;
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = arr[n];

	for (int i = n - 1; i >= 1; i--)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}