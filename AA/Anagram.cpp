#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int a[55] = { 0, };
	int b[55] = { 0, };
	char c[101];

	int  flag = 1;

	scanf("%s", &c);

	for (int i = 0; c[i] != NULL; i++)
	{
		if (c[i] >= 65 && c[i] <= 90) // 알파벳 대문자
		{
			a[c[i] - 64]++;
		}
		else                          // 알파벳 소문자
		{
			a[c[i] - 70]++;
		}
	}

	scanf("%s", &c);

	for (int i = 0; c[i] != NULL; i++)
	{
		if (c[i] >= 65 && c[i] <= 90) // 알파벳 대문자
		{
			b[c[i] - 64]++;
		}
		else                          // 알파벳 소문자
		{
			b[c[i] - 70]++;
		}
	}

	for (int i = 0; i < 53; i++)
	{
		if (a[i] != b[i])
		{
			flag = 0;
		}
	}

	if (flag == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}