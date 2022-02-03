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
	//8 3

	int n, key;
	int check = 0;
	int pos = 0;
	int cnt = 0;
	scanf("%d %d", &n, &key);

	vector<int> arr(n+1);

	while (1)
	{
		pos++;
		if (pos>n)
		{
			pos = 1;
		}
		if (arr[pos] == 0)
		{
			cnt++;
			if (cnt == key)
			{
				arr[pos] = 1;
				cnt = 0;
				check++;
			}
		}

		if (check == n -1)
		{
			break;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d", i);
			break;
		}
	}

	return 0;
}
//output
//7