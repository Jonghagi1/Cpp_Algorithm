#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<stack>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

void D(int x)
{
	if (x > 7) return;
	else
	{
		//printf("%d ", x); // 전위순회 출력 : 1 2 4 5 3 6 7
		D(x * 2);
		//printf("%d ", x); // 중위순회 출력 : 4 2 5 1 6 3 7 
		D(x * 2 + 1);
		printf("%d ", x); // 후위순회 출력 : 4 5 2 6 7 3 1
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"
	//input
	//11

	D(1);

	return 0;
}
//output
//1011