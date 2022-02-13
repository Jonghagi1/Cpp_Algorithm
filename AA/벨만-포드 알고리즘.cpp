#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//5 7
//1 2 5
//1 3 4
//2 3 - 3
//2 5 13
//3 4 5
//4 2 3
//4 5 7
//1 5

int dist[101];

struct Edge
{
	int start_node;
	int end_node;
	int val;

	Edge(int a, int b, int c)
	{
		start_node = a;
		end_node = b;
		val = c;
	}
};

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	vector<Edge> Ed;
	int n, m, a, b, c;
	int start, end;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c));
	}
	for (int i = 1; i <= n; i++)
	{
		dist[i] = 2147000000;
	}

	scanf("%d %d", &start, &end);
	dist[start] = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < Ed.size(); j++)
		{
			int u = Ed[j].start_node;
			int v = Ed[j].end_node;
			int w = Ed[j].val;
			if (dist[u] != 2147000000 && dist[u] + w < dist[v]);
			{
				dist[v] = dist[u] + w;
			}
		}
	}

	for (int j = 0; j < Ed.size(); j++) // 간선의 개수가 n개가 될 경우 -> 음의 사이클이 생긴다는 뜻이므로 종료
	{
		int u = Ed[j].start_node;
		int v = Ed[j].end_node;
		int w = Ed[j].val;
		if (dist[u] != 2147000000 && dist[u] + w < dist[v]);
		{
			dist[v] = dist[u] + w;
		}
	}

	printf("%d", dist[end]);

	return 0;
}
//output
//14