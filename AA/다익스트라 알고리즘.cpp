#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//6 9
//1 2 12
//1 3 4
//2 1 2
//2 3 5
//2 5 5
//3 4 5
//4 2 2
//4 5 5
//6 4 5

struct Edge
{
	int node;
	int dis;

	Edge(int a, int b)
	{
		node = a;
		dis = b;
	}

	bool operator< (const Edge &o)const
	{
		return dis > o.dis;
	}
};

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	priority_queue<Edge> Q;
	vector<pair<int, int> > graph[31];
	int n, m, a, b, c;

	scanf("%d %d", &n, &m);
	vector<int> dis(n + 1, 2147000000); // 1에서 n까지의 간선의 최소 가중치를 저장하는 벡터 배열 
										// 간선의 수 = 노드의 개수 + 1, 간선의 가중치 값을 모두 무한대로 초기화

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		graph[a].push_back(make_pair(b, c));
	}

	Q.push(Edge(1, 0));
	dis[1] = 0;

	while (!Q.empty())
	{
		int now = Q.top().node;
		int cost = Q.top().dis;
		Q.pop();

		if (cost > dis[now])
		{
			continue;
		}

		for (int i = 0; i < graph[now].size(); i++)
		{
			int next_node = graph[now][i].first;
			int next_dis = cost + graph[now][i].second;

			if (dis[next_node] > next_dis)
			{
				dis[next_node] = next_dis;
				Q.push(Edge(next_node, next_dis));
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (dis[i] != 2147000000)
		{
			printf("%d : %d\n", i, dis[i]);
		}
		else
		{
			printf("impossible\n");
		}
	}

	return 0;
}
//output
//2 : 11
//3 : 4
//4 : 9
//5 : 14
//6 : impossible