#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int  main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	int temp, a, b = 1;
	int i;
	int cnt = 0;

	scanf("%d", &a); // input : 15

	temp = a;
	a--;
	
	while (a>0)
	{
		b++;
		a = a - b;

		if (a%b==0)
		{
			for ( i = 1; i < b; i++) // i++ 한 뒤 i < b 조건식 수행
			{
				printf("%d + ", (a / b) + i);
			}
			printf("%d = %d\n", (a / b) + i, temp);
			cnt++;
		}
	}

	printf("%d", cnt);


	return 0;
}

//output
//7 + 8 + 9 = 15
//4 + 5 + 6 + 7 = 15
//1 + 2 + 3 + 4 + 5 + 6 = 15
//3