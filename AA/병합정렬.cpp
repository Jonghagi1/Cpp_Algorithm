#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//8
//7 6 3 1 5 2 4 8

int n;
int d[101], temp[101];

void divide(int lt, int rt)
{
	int mid;
	int p1, p2, p3;

	if (lt < rt)
	{
		mid = (lt + rt) / 2;
		divide(lt, mid);
		divide(mid + 1, rt);

		p1 = lt;
		p2 = mid + 1;
		p3 = lt;

		while (p1 <= mid && p2 <= rt)
		{
			if (d[p1] < d[p2])
			{
				temp[p3++] = d[p1++];
			}
			else
			{
				temp[p3++] = d[p2++];
			}
		}
		while (p1 <= mid)
		{
			temp[p3++] = d[p1++];
		}
		while (p2 <= rt)
		{
			temp[p3++] = d[p2++];
		}

		for (int i = lt; i <= rt; i++)
		{
			d[i] = temp[i]; // temp로 정렬 해둔 것들을 d 배열에 정렬
		}
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &d[i]);
	}

	divide(1, n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", d[i]);
	}

	return 0;
}
//output
//1 2 3 4 5 6 7 8