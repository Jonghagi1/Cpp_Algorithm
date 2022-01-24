#include<iostream>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	//	freopen("input.txt", "rt", stdin);	//

	int a; // 입력 받을 변수
	int n; // 입력 받을 개수
	int max = -2147000000, min = 2147000000; // 초기 값 초기화를 위해 max는 가장 작은 값 min은 가장 큰 값으로

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a>max)
		{
			max = a;
		}
		if (a<min)
		{
			min = a;
		}
	}

	cout << max - min;

	return 0;
}