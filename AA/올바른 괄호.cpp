#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);	//

	char arr[31];
	int cnt = 0; // 카운트

	scanf("%s", &arr);

	for (int i = 0; arr[i] != NULL; i++)
	{
		if (arr[i] == '(')
		{
			cnt++;
		}
		else if (arr[i] == ')')
		{
			cnt--;
		}

		if (cnt < 0)
		{
			break;
		}
	}

	if (cnt ==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}


	return 0;
}