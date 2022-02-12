#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//9 12
//1 2 12
//1 9 25
//2 3 10
//2 8 17
//2 9 8
//3 4 18
//3 7 55
//4 5 44
//5 6 60
//5 7 38
//7 8 35
//8 9 15

int unf[1001];

struct Edge
{
	int v1;
	int v2;
	int val;

	Edge(int a, int b, int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}

	bool operator< (Edge &o)
	{
		return val < o.val; // Edge를 오름차순 정렬
	}
};

int Find(int v)
{
	if (unf[v] == v)
	{
		return v;
	}
	else
	{
		return unf[v] = Find(unf[v]);
	}
}

void Union(int a, int b)
{
	int ua = Find(a);
	int ub = Find(b);

	if (ua != ub)
	{
		unf[ua] = ub;
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, m;
	vector<Edge> Ed; // Edge 타입의 ed 벡터 배열 생성
	int a, b, c;
	int res = 0;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		unf[i] = i;
	}

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a, b, c)); // 생성자 호출을 통해서
	}

	sort(Ed.begin(), Ed.end());

	for (int i = 0; i < m; i++)
	{
		int f1 = Find(Ed[i].v1);
		int f2 = Find(Ed[i].v2);

		if (f1 != f2)
		{
			res += Ed[i].val;
			Union(Ed[i].v1, Ed[i].v2);
		}
	}

	printf("%d", res);

	return 0;
}
//output
//196