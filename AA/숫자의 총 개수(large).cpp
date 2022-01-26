#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);//

	int n;				// 입력 값
	int c = 1;			// 자릿수
	int digit = 9;		// 자릿수에 따른 숫자 개수
	int result = 0;		// 최종 숫자 개수
	int sum = 0;		// 남은 자릿수 계산용

	scanf("%d", &n);

	while (sum + digit < n)
	{
		result = result + (c * digit);
		sum = sum + digit; // 9, 99, 999 ...
		c++; // 자릿수 증가
		digit = digit * 10; // 자릿수 증가에 따른 숫자 개수
	}

	result = result + (n - sum) * c;

	printf("%d", result);


	return 0;
}