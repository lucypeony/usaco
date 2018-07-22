/*
ID:lucypeo1
LANG:C++11
PROB:subset
*/
#include<fstream>
#include<iostream>
using namespace std; 

int main() {
	freopen("subset.in", "r", stdin);
	freopen("subset.out", "w", stdout);
	int n;
	cin >> n;
	int s = n * (n + 1);
	if (s % 4 != 0) {
		cout << 0 << endl;
		return 0;
	}
	long long f[1000] = { 0 };
	s /= 4;
	f[0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = s; j >= i; j--)
			f[j] += f[j - i];
	cout << f[s] / 2 << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
