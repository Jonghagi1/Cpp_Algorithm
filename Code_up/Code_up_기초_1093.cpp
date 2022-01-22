#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n, index;

	int arr_print[24] = { 0, }; // 0 ~ 24번 인덱스

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &index);
		arr_print[index] = arr_print[index] + 1;
	}

	for (int i = 1; i <= 23; i++)
	{
		printf("%d ", arr_print[i]);
	}

	return 0;

}