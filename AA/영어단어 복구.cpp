#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);	//

	char arr[101], arr2[101];
	int p = 0; // arr2 포지션

	// scanf 공백 못읽음
	gets_s(arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] != ' ')
		{
			if (arr[i] >= 65 && arr[i] <=90)
			{
				arr2[p] = arr[i] + 32;
				p++;
			}
			else
			{
				arr2[p] = arr[i];
				p++;
			}
		}
	}

	arr2[p] = NULL;

	printf("%s", arr2);

	return 0;
}