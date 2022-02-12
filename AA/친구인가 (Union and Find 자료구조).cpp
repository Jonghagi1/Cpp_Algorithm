#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int unf[1001]; // union & find 배열

//input
//9 7
//1 2
//2 3
//3 4
//4 5
//6 7
//7 8
//8 9
//3 8

int Find(int v)
{
	if (unf[v] == v)
	{
		return v;
	}
	else
	{
		return unf[v] = Find(unf[v]); // Find(unf[v]); -> unf[v] = Find(unf[v]); 이유 : 메모이제이션 (불필요한 재귀를 없애기 위해)
	}
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);

	if (a != b)
	{
		unf[a] = b;
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, m;
	int a, b;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		unf[i] = i;
	}

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		Union(a, b);
	}

	scanf("%d %d", &a, &b);
	if (Find(a) == Find(b))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}
//output
//NO
