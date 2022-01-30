#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;
	int temp = 0;
	int cnt = 0;
	int digit; // 나머지 담는 변수

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		temp = i;
		while (temp > 0) // temp = 0 이면 더이상 나머지가 나올수가 없기 때문
		{
			digit = temp % 10;
			if (digit == 3)
			{
				cnt++;
			}

			temp = temp / 10;
		}
	}

	printf("%d", cnt);

	return 0;
}