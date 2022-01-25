#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);	//

	int n; // 숫자 개수
	int cnt[50001] = { 0, }; // 약수 카운트

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j = j + i) // j + i 는 i 의 배수만큼 계산
		{
			cnt[j]++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", cnt[i]);
	}

	return 0;
}