#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, temp;

	scanf("%d", &n);

	vector<int> arr(n + 1);		

	for (int i = 2; i <= n; i++)
	{
		temp = i;
		int j = 2;
		while (1)
		{
			if (temp%j == 0)
			{
				temp = temp / j;
				arr[j]++;
			}
			else
			{
				j++;
			}

			if (temp == 1)
			{
				break;
			}
		}

	}

	printf("%d! = ", n);

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}