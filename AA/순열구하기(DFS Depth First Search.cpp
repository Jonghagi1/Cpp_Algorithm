#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//4 3
//1 3 6 7

int arr[16], res[16], ch[16];
int n, r;
int cnt = 0;

void DFS(int L)
{
	if (L==n)
	{
		for (int i = 0; i < r; i++)
		{
			printf("%d ", res[i]);
		}
		puts("");
		cnt++;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (ch[i]==0)
			{
				ch[i] = 1;
				res[L] = arr[i];
				DFS(L + 1);
				ch[i] = 0;

			}
		}
	}
}

int main()
{
	freopen("input.txt", "rt", stdin);// "input.txt"

	scanf("%d %d", &n, &r);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	DFS(0);

	printf("%d", cnt);

	return 0;
}
//output
//1 3 6
//1 3 7
//1 6 3
//1 6 7
//1 7 3
//1 7 6
//3 1 6
//3 1 7
//3 6 1
//3 6 7
//3 7 1
//3 7 6
//6 1 3
//6 1 7
//6 3 1
//6 3 7
//6 7 1
//6 7 3
//7 1 3
//7 1 6
//7 3 1
//7 3 6
//7 6 1
//7 6 3
//24