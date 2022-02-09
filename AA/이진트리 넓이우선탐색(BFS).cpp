#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//1 2
//1 3
//2 4
//2 5
//3 6
//3 7

int Q[100], ch[10];
int front = -1; // 노드 불러오기
int back = -1;  // 노드 추가
vector<int>	map[10];

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int a, b;
	int x;

	for (int i = 1; i <= 6; i++)
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
		map[b].push_back(a);
	}

	Q[++back] = 1; // 노드 추가
	ch[1] = 1;
	
	while (front<back)
	{
		x = Q[++front]; // x에 노드 불러와서 대입
		printf("%d ", x);

		for (int i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]]==0)
			{
				ch[map[x][i]] = 1;
				Q[++back] = map[x][i];
			}
		}
	}
	

	return 0;
}
//output
//1 2 3 4 5 6 7
