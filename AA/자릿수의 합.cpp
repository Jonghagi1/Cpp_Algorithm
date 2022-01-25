#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int digit_sum(int x)
{
	int sum = 0, temp = 0;

	while (x > 0)
	{
		temp = x % 10;
		x = x / 10;
		sum += temp;
	}

	return sum;
}

int  main()
{
	//freopen("input.txt", "rt", stdin);//

	int n;		// 입력 받을 숫자 개수
	int num;	// 입력 받을 숫자
	int sum = 0, max = -2147000000;
	int result = 0; // 결과 값 출력 변수

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum = digit_sum(num);

		if (sum > max)
		{
			max = sum;
			result = num;
		}
		else if (sum == max)
		{
			if (num > result)
			{
				result = num;
			}
		}
	}

	printf("%d", result);

	return 0;
}