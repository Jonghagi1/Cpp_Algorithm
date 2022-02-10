#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

//input
//6
//50 2
//20 1
//40 2
//60 3
//30 3
//30 1

struct Data
{
	int money;
	int when;

	Data(int a, int b)
	{
		money = a;
		when = b;
	}

	bool operator<(const Data &o)
	{
		return when > o.when;
	}

};

int main()
{
	//	freopen("input.txt", "rt", stdin);// "input.txt"

	int n;
	int a, b; // a : 강연료, b : 가능한 날짜 수
	vector<Data> T;
	priority_queue<int > pQ;
	int max = -2147000000;
	int j;
	int res = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		T.push_back(Data(a, b));
		if (b > max)	// 가장 큰 날짜 구하기
		{
			max = b;
		}
	}

	sort(T.begin(), T.end()); // T는 정렬 됨

	j = 0;
	for (int i = max; i >= 1; i--)
	{
		for (; j < n; j++)
		{
			if (T[j].when < i)
			{
				break;
			}
			pQ.push(T[j].money); // i(1, 2, 3 ... ) 이라는 날짜에 할 수 있는 강연을 push 한다
		}

		if (!pQ.empty())
		{
			res += pQ.top();
			pQ.pop();
		}
	}

	printf("%d", res);

	return 0;
}
//output
//150