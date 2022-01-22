#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	int i = 0;

	scanf("%d", &n);

	for (i = 0; ;)
	{
		if (sum>=n)
		{
			break;
		}
		i++;
		sum += i;
	}

	printf("%d", i);

	return 0;

}