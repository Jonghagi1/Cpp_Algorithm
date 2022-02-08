#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//5 9
//1 2
//1 3
//1 4
//2 1
//2 3
//2 5
//3 4
//4 2
//4 5

int n;
int map[21][21];
int ch[21];
int cnt = 0;

void DFS(int v)
{
	if (v == n)
	{
		cnt++;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (map[v][i] == 1 && ch[i] == 0)
			{
				ch[i] = 1;
				DFS(i);
				ch[i] = 0;
			}
		}
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int m;
	int a, b;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		map[a][b] = 1; //map[][] = 1 은 이동이 가능하다는 의미
	}

	ch[1] = 1;

	DFS(1);

	printf("%d", cnt);


	return 0;
}
//output
//6
