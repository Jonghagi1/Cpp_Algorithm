#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;


int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//3
	//2 1 3

	int n, m;
	int j;
	stack<int> s;

	scanf("%d", &n); // 3

	j = 1;

	vector<char> str1;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &m); // 2 1 3

		s.push(m);
		str1.push_back('P');

		while (1)
		{
			if (s.empty())break;

			if (s.top() == j)
			{
				s.pop();
				str1.push_back('O');
				j++;
			}
			else
			{
				break;
			}
		}
	}

	if (!s.empty())
	{
		printf("impossible");
	}
	else
	{
		for (int i = 0; i < str1.size(); i++)
		{
			printf("%c", str1[i]);
		}
	}

	return 0;
}
//output
//PPOOPO