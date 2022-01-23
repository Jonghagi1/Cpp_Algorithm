#include<iostream>
#include<stdio.h>

int main()
{
	int map[11][11] = {};
	int i = 2; // 초기 x 좌표
	int j = 2; // 초기 y 좌표

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d ", &map[i][j]);
		}
	}

	while (1)
	{
		if (map[i][j] == 0)
		{
			map[i][j] = 9;
			j++;
		}

		if (map[i][j] == 1)
		{
			j--;
			i++;
		}

		if (map[i][j] == 2)
		{
			map[i][j] = 9;
			break;
		}
		else if (map[i + 1][j] == 1 && map[i][j + 1] == 1)
		{
			if (map[i][j] == 0)
			{
				map[i][j] = 9;
			}
			break;
		}
	}


	for (int i = 1; i <= 10; i++) // 출력
	{
		for (int j = 1; j <= 10; j++)
		{
			if (map[i][j] < 1 || map[i][j] > 1)
			{

			}
		}
	}


	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;

}