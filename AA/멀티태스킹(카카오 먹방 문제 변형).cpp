#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//3
	//1
	//2
	//3
	//5

	int n;
	int b;
	int cnt = 0;
	int check = 0;
	int pos = 0;
	int totally_time = 0;

	scanf("%d", &n);
	vector<int> arr(n+1);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		totally_time += arr[i];
	}

	scanf("%d", &b);

	if (b>=totally_time)
	{
		printf("-1");
		return 0;
	}

	while (1)
	{
		pos++;

		if (pos > n)
		{
			pos = 1;
		}

		if (arr[pos] != 0)
		{
			arr[pos] = arr[pos] - 1;
			cnt++;
			if (cnt == b) // b초후 정전
			{
				break;
			}
		}
		else if (arr[pos] == 0)
		{
			continue;
		}
	}

	while (1)
	{
		pos++;
		if (pos>n)
		{
			pos = 1;
		}

		if (arr[pos] != 0)
		{
			break;
		}
	}

	printf("%d", pos);

	return 0;
}
//output
//3