#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	printf("%d\n", n1 + n2);
	printf("%d\n", n1 - n2);
	printf("%d\n", n1 * n2);
	printf("%d\n", n1 / n2);
	printf("%d\n", n1 % n2);
	round((float)n1 / (float)n2);
	printf("%.2f", (float)n1 / (float)n2);

	return 0;
}