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
	//(()(()))(()

	char arr[31];
	int flag = 1;

	stack<char> s;

	scanf("%s", &arr);

	for (int i = 0; arr[i] != NULL; i++)
	{

		if (arr[i] == '(')
		{
			s.push(arr[i]);
		}
		else
		{
			if (s.empty())
			{
				printf("NO");
				flag = 0;
				break;
			}
			else
			{
				s.pop();
			}
		}
	}

	if (s.empty() && flag == 1)
	{
		printf("YES");
	}
	else if (!s.empty() && flag == 1)
	{
		printf("NO");
	}

	return 0;
}
//output
//NO