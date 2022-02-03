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
	//3 23 85 34 17 74 25 52 65
	//10 7 39 42 88 52 14 72 63
	//87 42 18 78 53 45 18 84 53
	//34 28 64 85 12 16 75 36 55
	//21 77 45 35 28 75 90 76 1
	//25 87 65 15 28 11 37 28 74
	//65 27 75 41 7 89 78 64 39
	//47 47 70 45 23 65 3 41 44
	//87 13 82 38 50 12 48 29 80

	int ave, res = 0;
	int sum;
	int min = 2147000000;
	int temp;

	int arr[10][10];

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 1; i <= 9; i++)
	{
		ave = 0;
		sum = 0;
		for (int j = 1; j <= 9; j++)
		{
			sum += arr[i][j];
		}

		ave = (sum / 9.0) + 0.5; // 반올림
		printf("%d ", ave);

		min = 2147000000;

		for (int j = 1; j <= 9; j++)
		{
			temp = abs(arr[i][j]-ave);
			if (temp < min)
			{
				min = temp;
				res = arr[i][j];
			}
			else if (temp == min)
			{
				if (arr[i][j] > res)
				{
					res = arr[i][j];
				}
			}
		}
		printf("%d\n", res);
	}


	return 0;
}
//output
//42 34
//43 42
//53 53
//45 36
//50 45
//41 37
//54 64
//43 44
//49 50