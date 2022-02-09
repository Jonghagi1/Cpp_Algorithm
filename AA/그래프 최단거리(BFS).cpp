#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
#pragma warning(disable:4996)

using namespace std;

//input
//6 9
//1 3
//1 4
//2 1
//2 5
//3 4
//4 5
//4 6
//6 2
//6 5


int ch[21];
int dis[21]; // 최소 간선 수 저장

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"


	int n, m, a, b;
	int x;
	vector<int> map[21];
	queue<int> Q;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}

	Q.push(1);
	ch[1] = 1;

	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();
		
		for (int i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]]==0)
			{
				ch[map[x][i]] = 1;
				Q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		printf("%d : %d\n", i, dis[i]);
	}

	return 0;
}
//output
//2 : 3
//3 : 1
//4 : 1
//5 : 2
//6 : 2
