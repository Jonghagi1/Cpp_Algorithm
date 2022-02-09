#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//5 14

int ch[10001];
int d[3] = { 1, -1, 5 };

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n, m;
	queue<int> Q;
	int x;
	int pos = 0;

	scanf("%d %d", &n, &m);

	Q.push(n);
	ch[n] = 1; // 출발지점

	while (!Q.empty())
	{
		x = Q.front();
		Q.pop();

		for (int i = 0; i < 3; i++)
		{
			pos = x + d[i];
			if (pos <= 0 || pos > 10000) { continue; }
			if (pos == m)
			{
				printf("%d", ch[x]); // ch[n] = 1 처음이 1로 시작했기 때문에 그 전 지점인 x를 출력 해야한다
				exit(0);
			}
			else
			{
				if (ch[pos] == 0)
				{
					ch[pos] = ch[x] + 1;
					Q.push(pos);
				}
			}

		}

	}

	return 0;
}
//output
//3