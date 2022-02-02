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
	//8 32
	//23 87 65 12 57 32 99 81

	int n, key;
	int mid;
	int lt, rt;
	int temp;

	scanf("%d %d", &n, &key);

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	lt = 0;
	rt = n - 1;

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;

		if (arr[mid] == key)
		{
			printf("%d", mid + 1);
			return 0;
		}
		else if (arr[mid] > key)
		{
			rt = mid - 1;
		}
		else
		{
			lt = mid + 1;
		}
	}

	return 0;
}
//output
//3