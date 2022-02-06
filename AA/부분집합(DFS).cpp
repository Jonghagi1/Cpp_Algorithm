#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int ch[11];
int n;
void DFS(int L)
{
	if (L == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (ch[i] == 1)
			{
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	else
	{
		ch[L] = 1;
		DFS(L + 1);
		ch[L] = 0;
		DFS(L + 1);
	}
}

//input
//3
int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	scanf("%d", &n);

	DFS(11);

	return 0;
}
//output
//1 2 3
//1 2
//1 3
//1
//2 3
//2
//3