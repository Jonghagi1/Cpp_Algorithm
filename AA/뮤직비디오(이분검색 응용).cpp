#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int arr[1001], n;

int Count(int mid_size)
{
	int sum = 0, cnt = 1; // DVD는 무조건 한개가 있으므로 cnt = 1

	for (int i = 1; i <= n; i++)
	{
		if (sum + arr[i] > mid_size)
		{
			cnt++; // DVD 용량 초과로 새로운 DVD 추가
			sum = arr[i];
		}
		else
		{
			sum = sum + arr[i];
		}
	}

	return cnt;

}

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//9 3
	//1 2 3 4 5 6 7 8 9

	int m; // DVD 개수
	int lt = 1, rt = 0;
	int res = 0;
	int mid;
	int max = -2147000000;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		rt = rt + arr[i]; // rt는 가장 큰 수 부터 시작
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;

		if (mid >= max && Count(mid) <= m)
		{
			res = mid;
			rt = mid - 1;
		}
		else
		{
			lt = mid + 1;
		}
	}

	printf("%d", res);

	return 0;
}
//output
//17