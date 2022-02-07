#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//4 12
//2 4 6 8

int n, m;
int cnt = 0;
int arr[11];

void DFS(int L, int Val)
{
	if (L == n + 1)
	{
		if (m == Val)
		{
			cnt++;
		}
	}
	else
	{
		DFS(L + 1, Val + arr[L]);
		DFS(L + 1, Val - arr[L]);
		DFS(L + 1, Val);
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	DFS(1, 0);

	if (cnt == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d", cnt);
	}


	return 0;
}
//output
//4