#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);	//

	char arr[50]; // 문자열 입력
	int n = 0; // 숫자 더할 변수
	int cnt = 0; // 약수 변수

	scanf("%s", &arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] >= 48 && arr[i] <= 57)
		{
			n = (n * 10) + (arr[i] - 48);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cnt++;
		}

	}

	printf("%d\n%d", n, cnt);

	return 0;
}