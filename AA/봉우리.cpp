#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//5
	//5 3 7 2 3
	//3 7 1 6 1
	//7 2 5 3 4
	//4 3 6 4 1
	//8 7 3 5 2

	int map[60][60];
	int dx[4] = { -1, 0, 1, 0 }; // 봉우리를 기준으로 시계 방향 좌표 [행] 배열
	int dy[4] = { 0, 1, 0, -1 }; // 봉우리를 기준으로 시계 방향 좌표 [열] 배열

	int n;
	int flag; // 1이면 봉우리 x
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			flag = 0;
			for (int k = 0; k < 4; k++) // 좌표 배열 사용 (상하좌우 4개)
			{
				if (map[i + dx[k]][j + dy[k]] >= map[i][j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				cnt++;
			}
		}
	}

	printf("%d", cnt);


	return 0;
}
//output
//10