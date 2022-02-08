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

vector<int> map[21];
int ch[21];
int cn = 0;
int cnt = 0;
int n;

void DFS(int v)
{
	if (v == n)
	{
		cnt++;
	}
	else
	{
		for (int i = 0; i < map[v].size(); i++)
		{
			if (ch[map[v][i]] == 0) // map[v][i] => 노드
			{
				ch[map[v][i]] = 1;
				DFS(map[v][i]);
				ch[map[v][i]] = 0;
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
		map[a].push_back(b); // 인접 리스트 생각 map이라는 배열에 0,1,2,3 ... 에 0번 칸에 b 값들이 연결... 1번 칸에 b 값들이 연결로 생각
	}

	ch[1] = 1;
	DFS(1);

	printf("%d", cnt);

	return 0;
}
//output
//6
