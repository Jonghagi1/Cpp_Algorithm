#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int n, a[11];
int total = 0;
bool flag = false;
void DFS(int L, int sum)
{
	if (sum > (total / 2)) { return; }

	if (flag == true) { return; }

	if (L == n + 1) // 종료지점
	{
		if (sum == total - sum)
		{
			flag = true;
		}
	}
	else
	{
		DFS(L + 1, sum + a[L]);
		DFS(L + 1, sum);
	}
}

//input
//6
int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		total += a[i];
	}

	DFS(1, 0);

	if (flag == true)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}
//output
//1 3 5 6 7 10