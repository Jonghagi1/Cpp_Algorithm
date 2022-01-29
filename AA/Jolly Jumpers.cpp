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
	int pre, now, pos;

	scanf("%d", &n);

	vector<int> check(n);

	scanf("%d", &pre); // 첫 항은 pre
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &now);

		pos = abs(pre - now);

		if (pos < n && check[pos] == 0)
		{
			check[pos] = 1;
		}
		else
		{
			printf("NO");
			return 0; // 프로그램 종료
		}

		pre = now;
	}

	printf("YES");

	return 0;
}