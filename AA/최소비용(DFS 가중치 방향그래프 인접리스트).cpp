#include<stdio.h>
#include<vector>
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

vector<pair<int, int> > map[31];
int n;
int ch[31];
int cost = 2147000000;

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
		for (int i = 0; i < map[v].size(); i++)
		{
			if (ch[map[v][i].first] == 0)
			{
				ch[map[v][i].first] = 1;
				DFS(map[v][i].first, sum + map[v][i].second);
				ch[map[v][i].first] = 0;
			}
		}
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int m, a, b, c;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}

	ch[1] = 1;

	DFS(1, 0);

	printf("%d", cost);

	return 0;
}
//output
//13
