#include<queue>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
#pragma warning(disable:4996)

using namespace std;

//input

struct Loc {
	int x, y, z;

	Loc(int a, int b, int c)
	{
		x = a;
		y = b;
		z = c;
	}

	bool operator< (const Loc &o) const
	{
		if (x!=o.x)
		{
			return x < o.x;
		}
		if (y!=o.y)
		{
			return y<o.y;
		}
		if (z != o.z)
		{
			return z < o.z;
		}
	}
};

int main()
{
	//freopen("input.txt", "rt", stdin);// "input.txt"

	vector<Loc> xy;
	xy.push_back(Loc(2, 3, 5));
	xy.push_back(Loc(3, 6, 7));
	xy.push_back(Loc(2, 3, 1));
	xy.push_back(Loc(5, 2, 3));
	xy.push_back(Loc(3, 1, 6));

	sort(xy.begin(), xy.end());	

	for (auto pos : xy) cout << pos.x << " " << pos.y << " " << pos.z << endl;


	return 0;
}
//output
