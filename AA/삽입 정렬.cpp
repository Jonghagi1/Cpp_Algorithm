#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;


int  main(
)
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
		
	int n, temp;
	int j;

	scanf("%d", &n);

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > temp)
			{
				arr[j + 1] = arr[j]; // 큰 값을 뒤로 땡긴다
			}
			else
			{
				break;
			}
		}
		arr[j + 1] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}