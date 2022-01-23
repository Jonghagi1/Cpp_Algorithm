#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int h, w, n, l, d; // 세로(h), 가로(w), 막대의 개수(n), 각 막대의 길이(l), 방향(d) 가로 = 0, 세로 = 1
	int x, y;
	int map[101][101] = { 0, };

	scanf("%d %d", &h, &w); // 세로 가로 입력

	scanf("%d", &n);		// 막대 개수 입력

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y); // 막대 길이, 방향, 막대 놓을 위치 입력

		if (d == 0) // 가로 방향
		{
			for (int i = y; i < y + l; i++)
			{	
				map[x][i] = 1;
			}
		}
		else if (d == 1) // 세로 방향
		{
			for (int j = x; j < x + l; j++)
			{
				map[j][y] = 1;
			}
		}
	}
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;

}