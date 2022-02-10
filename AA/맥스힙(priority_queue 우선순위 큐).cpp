#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//5
//3
//6
//0
//5
//0
//2
//4
//0
//-1

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;
	priority_queue<int> pQ;

	while (1)
	{
		scanf("%d", &n);
		if (n == -1) break;

		if (n == 0)
		{
			if (pQ.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", pQ.top());
				pQ.pop();
			}
		}
		else
		{
			pQ.push(n);
		}
	}

	return 0;
}
//output
//6
//5
//5
