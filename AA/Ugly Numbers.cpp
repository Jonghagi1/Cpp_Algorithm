#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int arr[1501];

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//10

	int n;
	int p2, p3, p5;
	int min = 2147000000;
	int i;

	scanf("%d", &n);

	arr[1] = 1;
	p2 = p3 = p5 = 1; // p2*2, p3*3, p5*5

	for (int i = 2; i <= n; i++)
	{
		if (arr[p2] * 2 < arr[p3] * 3)
		{
			min = arr[p2] * 2;
		}
		else
		{
			min = arr[p3] * 3;
		}

		if (arr[p5] * 5 < min)
		{
			min = arr[p5] * 5;
		}

		if (arr[p2] * 2 == min) p2++;
		if (arr[p3] * 3 == min) p3++;
		if (arr[p5] * 5 == min) p5++;

		arr[i] = min;
	}

	printf("%d", arr[n]);

	return 0;
}
//output
//12