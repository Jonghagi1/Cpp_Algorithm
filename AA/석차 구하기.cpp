#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#pragma warning(disable:4996)

using namespace std;


int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int n;

	scanf("%d", &n);

	vector<int> score(n);
	vector<int> rank(n);

	for (int i = 0; i < n; i++)
	{
		rank[i] = 1; // rank 배열 1로 초기화
	}

	for (int i = 0; i < n; i++)
	{		
		scanf("%d", &score[i]); // score 입력
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (score[i] < score[j])
			{
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", rank[i]);
	}


	return 0;
}