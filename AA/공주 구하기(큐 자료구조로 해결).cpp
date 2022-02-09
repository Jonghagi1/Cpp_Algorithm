#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//8 3

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, m;
	int k = 0;
	queue<int> Q;
	int x;
	
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		Q.push(i);
	}

	while (!Q.empty())
	{
		for (int i = 1; i < m; i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();

		if (Q.size() == 1)
		{
			printf("%d", Q.front());
			Q.pop();
		}

	}


	return 0;
}
//output
//7
