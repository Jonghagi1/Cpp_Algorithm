#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//0 0 0 0 0 0 0
//0 1 1 1 1 1 0
//0 0 0 1 0 0 0
//1 1 0 1 0 1 1
//1 1 0 0 0 0 1
//1 1 0 1 1 0 0
//1 0 0 0 0 0 0

int map[8][8];
int ch[8][8];
int cnt = 0;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void DFS(int x, int y)
{
	int xx, yy;
	if (x == 7 && y == 7)
	{
		cnt++;
	}
	else
	{
		for (int k = 0; k < 4; k++)
		{
			xx = x + dx[k];
			yy = y + dy[k];

			if (xx < 1 || xx > 7 || yy < 1 || yy>7) continue; // 미로 벗어난 경우

			if (map[xx][yy] == 0 && ch[xx][yy] == 0)
			{
				ch[xx][yy] = 1;
				DFS(xx, yy);
				ch[xx][yy] = 0; // 백트래킹 하면서 0으로 초기화
			}
		}
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}

	ch[1][1] = 1;
	DFS(1, 1);

	printf("%d", cnt);

	return 0;
}
//output
//8