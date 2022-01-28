#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;
	int arr1[101];
	int arr2[101];

	scanf("%d", &n);

	for (int i = 0; i < n ; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < n ; i++)
	{
		scanf("%d", &arr2[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (arr1[i] == arr2[i])
		{
			printf("D\n");
		}
		else if (arr1[i] == 1 && arr2[i] == 3)
		{
			printf("A\n");
		}
		else if (arr1[i] == 2 && arr2[i] == 1)
		{
			printf("A\n");
		}
		else if (arr1[i] == 3 && arr2[i] == 2)
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
	}



	return 0;
}