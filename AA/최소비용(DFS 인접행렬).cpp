#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//5 8
//1 2 12
//1 3 6
//1 4 10
//2 3 2
//2 5 2
//3 4 3
//4 2 2
//4 5 5

int map[21][21];
int cost = 2147000000;
int n;
int ch[21];

void DFS(int v, int sum)
{
	if (v == n)
	{
		if (sum < cost)
		{
			cost = sum;
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (map[v][i] > 0 && ch[i] == 0) // 가중치가 있고(연결이 되어있다) && 노드를 지나간 적 없다
			{
				ch[i] = 1;
				DFS(i, sum + map[v][i]);
				ch[i] = 0;
			}
		}
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int m;
	int a, b, c;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}

	ch[1] = 1;
	DFS(1, 0);

	printf("%d", cost);

	return 0;
}
//output
//13