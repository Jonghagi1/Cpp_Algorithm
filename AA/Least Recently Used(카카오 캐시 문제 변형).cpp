#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int cache_size, n, pos;
	int i, j;
	int a;

	scanf("%d %d", &cache_size, &n); // 캐시 크기, 작업 크기 입력

	vector<int> arr(cache_size);		// 메모리에 담은 cahce_arr 배열

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);

		pos = -1; // -1 이면 miss, 아니면 hit

		for (j = 0; j < cache_size; j++)
		{
			if (arr[j] == a)
			{
				pos = j;
			}
		}

		if (pos == -1) // Miss
		{
			for (j = cache_size - 1; j >= 1; j--)
			{
				arr[j] = arr[j - 1];
			}
		}
		else // Hit
		{
			for (j = pos; j >= 1; j--)
			{
				arr[j] = arr[j - 1];
			}
		}
		arr[0] = a;
	}

	for (int i = 0; i < cache_size; i++)
	{
		printf("%d ", arr[i]);
	}



	return 0;
}