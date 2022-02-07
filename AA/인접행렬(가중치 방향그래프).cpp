#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//6 9
//1 2 7
//1 3 4
//2 1 2
//2 3 5
//2 5 5
//3 4 5
//4 2 2
//4 5 5
//6 4 5

int map[21][21];

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, m, a, b, c; // a : 시작 노드, b : 도착 노드, c : 가중치

	scanf("%d %d", &n, &m); //n 정점(node), m 간선(vertex)

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", map[i][j]);
		}
		puts("");
	}

	return 0;
}
//output
//0 7 4 0 0 0
//2 0 5 0 5 0
//0 0 0 5 0 0
//0 2 0 0 5 0
//0 0 0 0 0 0
//0 0 0 5 0 0