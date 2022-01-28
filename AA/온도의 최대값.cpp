#include<iostream>
#include<stdio.h>
#include<vector>
#pragma warning(disable:4996)

//using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, k;
	int max = -2147000000;
	int sum = 0;

	scanf("%d %d", &n, &k);

	std::vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i <k; i++)
	{
		sum += arr[i];
	}
		
	max = sum;

	for (int i = k; i < n; i++)
	{
		sum = sum + (arr[i] - arr[i - k]);
		if (sum > max)
		{
			max = sum;
		}
	}

	printf("%d", max);

	return 0;
}