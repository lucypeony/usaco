/*
ID:lucypeo1
LANG:C++11
PROB:lamps
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int state[9][7] = {
	{ 0,0,0,0,0,0,0 },
{ 0,0,0,0,0,0,0 },//press 1
{ 0,0,0,1,1,1,0 },//press 3 & 4
{ 0,0,1,0,1,0,1 },//press 2
{ 0,0,1,1,0,1,1 },//press 4
{ 0,1,0,0,1,0,0 },//press 1 & 4
{ 0,1,0,1,0,1,0 },//press 3
{ 0,1,1,0,0,0,1 },//press 2 & 4
{ 0,1,1,1,1,1,1 } //not pressing
};
int c, n, x, a[8];
int minn[9] = { 0,1,2,1,3,2,1,2 };
bool flag = 0;

int main()
{
	freopen("lamps.in", "r", stdin);
	freopen("lamps.out", "w", stdout);
	for (int i = 1; i <= 6; i++)
		a[i] = -1;
	cin >> n >> c;
	while (cin >> x, x != -1)
	{
		int v = x % 6;
		if (v == 0) v = 6;
		a[v] = 1;
	}
	while (cin >> x, x != -1)
	{
		int v = x % 6;
		if (v == 0) v = 6;
		a[v] = 0;
	}
	for (int i = 1; i <= 8; i++)
	{
		int f = 1;
		for (int j = 1; j <= 6; j++)
		{
			if (a[j] == -1)
				continue;
			if (a[j] != state[i][j])
			{
				f = 0;
				break;
			}
		}
		if (f == 1 && (c >= minn[i] || (c == 1 && i == 4)))
		{
			for (int p = 1; p <= n; p++)
			{
				int v = p % 6;
				if (v == 0) v = 6;
				cout << state[i][v];
				flag = 1;
			}
			cout << endl;
		}
	}
	if (!flag)
		cout << "IMPOSSIBLE" << endl;
	return 0;
}