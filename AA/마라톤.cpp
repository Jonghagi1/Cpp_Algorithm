#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;
	int rank = 1;

	scanf("%d", &n);

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("1 ");

	for (int i = 1; i < n; i++)
	{
		rank = 1;
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[i] <= arr[j])
			{
				rank++;
			}
		}
		printf("%d ", rank);
	}

	return 0;
}