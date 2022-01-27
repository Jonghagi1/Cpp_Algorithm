#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, cnt = 0;
	int flag = 1; // 1 = 소수, 0 = 소수 x

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		flag = 1;
		for (int j = 2; j*j <= i; j++) // 제곱근 이용 n = 36 이면 약수 2,3,4,6으로만 약수인지 확인하면 간단함
		{
			if (i%j==0)
			{
				flag = 0;
			}
		}
		
		if (flag == 1)
		{
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}