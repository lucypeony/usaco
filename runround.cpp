/*
ID:lucypeo1
LANG:C++11
PROB:runround
*/
#include<fstream>
#include<string>
#include<iostream>
using namespace std;


//how to decide if the digits are unique? 
bool ifunique(long long x) {
	int a[10] = { 0 };
	while (x > 0) {
		a[x % 10]++;
		x /= 10;
	}
	for (int i = 0; i <= 9; i++)
		if (a[i] != 0 && a[i] != 1)
			return false;
	if (a[0] != 0)
		return false;
	return true;
}

bool ifround(long long x) {
	if (!ifunique(x))
		return false;
	string s = to_string(x);
	int len = s.size();
	int flag[10] = { 0 };
	int count = 0;
	int now = s[0] - '0';
	int i = 0;
	flag[i] = 1;
	while (count <len) {
		i = (i + now) % len;
		now = s[i] - '0';
		flag[i] += 1;
		count++;
	}

	int c = 0;
	for (int i = 0; i < len; i++)
		if (flag[i])
			c++;
		else
			return false;
	if (c == len && flag[0]==2)
		return true;
	else
		return false;
}

int main() {
	freopen("runround.in", "r", stdin);
	freopen("runround.out", "w", stdout);
	long long x;
	cin >> x;
	x++;
	while (!ifround(x)) {
		x++;
	}
	cout << x << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
