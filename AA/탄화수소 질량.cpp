#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int c = 0, h = 0;
	int pos = 0; // H 위치 확인용 변수
	char arr[100];
	int i;
	
	scanf("%s", &arr);

	if (arr[1] == 'H') // C가 한개
	{
		c = 1;
		pos = 1;
	}
	else
	{
		for (i = 1; arr[i] != 'H' ; i++)
		{
			c = c * 10 + (arr[i] - 48);	// C 개수 확인
		}
		pos = i; // i == 2
	}

	if (arr[pos + 1] == NULL)
	{
		h = 1;
	}
	else
	{
		for (int i = pos+1; arr[i] != NULL; i++)
		{
			h = h * 10 + (arr[i] - 48);
		}
	}

	printf("%d", c * 12 + h);

	



	return 0;
}