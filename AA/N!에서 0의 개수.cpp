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
	int temp;
	int cnt1 = 0; // 2
	int cnt2 = 0; // 5

	scanf("%d", &n);

	for (int i = 2; i <= n; i++) // 소인수분해 2, 5 개수로 0의 개수 확인 할 수 있다
	{
		temp = i;

		int j = 2;

		while (1)
		{
			if (temp%j==0)
			{
				if (j==2)
				{
					cnt1++;
				}
				else if (j == 5)
				{
					cnt2++;
				}
				temp = temp / j;
			}

			else
			{
				j++;
			}

			if (temp == 1)
			{
				break;
			}

		}
	}

	if (cnt1 < cnt2)
	{
		printf("%d", cnt1);
	}
	else
	{
		printf("%d", cnt2);
	}


	return 0;
}