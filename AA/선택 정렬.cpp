#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	freopen("input.txt", "rt", stdin);// "input.txt"

	int n, temp;
	int idx = 0;

	scanf("%d", &n);

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[idx])
			{
				idx = j; // idx에는 가장 작은 값의 위치가 저장 된다
			}
		}

		temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}