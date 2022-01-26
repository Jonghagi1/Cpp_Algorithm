#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int digit, max = -2147000000, result;

	char arr[101];
	char arr2[10];

	scanf("%s", &arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		digit = arr[i] - 48;
		arr2[digit]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr2[i] >= max)
		{
			max = arr2[i]; // max 가장 많은 숫자가 있는 값
			result = i;
		}
	}

	printf("%d", result);


	return 0;
}