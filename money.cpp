/*
ID:lucypeo1
LANG:C++11
PROB:money
*/
#include<iostream>
#include<fstream>

using namespace std; 

int main() {
	freopen("money.in", "r", stdin);
	freopen("money.out", "w", stdout);

	int v, n;
	long long a[10001] = { 0 };
	int b[26];

	cin >> v >> n;
	for (int i = 1; i <= v; i++)
		cin >> b[i];

	a[0] = 1;
	for (int i = 1; i <= v; i++)
		for (int j = b[i]; j <= n; j++)
			a[j] += a[j - b[i]];

	cout << a[n] << endl;

	fclose(stdin);
	fclose(stdout);
	return 0;
}