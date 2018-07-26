/*
ID:lucypeo1
LANG:C++11
PROB:zerosum
*/
#include<stack>
#include<iostream>
#include<fstream>

using namespace std;

char sign[9];//sign[i] left:i+1;right number: i+2
int n;

int calculate() {
	int temp = 1;
	int ans = 0;
	int flag = 1;
	for (int i = 1; i < n; i++) {
		if (sign[i] == ' ')
			temp = temp * 10 + (i + 1);
		else if (sign[i] == '+') {
			ans += (flag*temp);
			temp = i + 1;
			flag = 1;
		}
		else if (sign[i] == '-') {
			ans += (flag*temp);
			temp = i + 1;
			flag = -1;
		}
	}
	ans += (flag*temp);
	return ans;
}

void output() {
	cout << 1;
	for (int i = 1; i < n; i++)
		cout << sign[i] << i + 1;
	cout << endl;
}

void dfs(int i) {
	if (i == n) {
		//calculate the sum 
		//if equals 0 ,output 
		int sum = calculate();
		if (sum == 0)
			output();
	}
	if (i > n)
		return;


	//space
	sign[i] = ' ';
	dfs(i + 1);

	//+
	sign[i] = '+';
	dfs(i + 1);

	//-
	sign[i] = '-';
	dfs(i + 1);

}

int main() {
	freopen("zerosum.in", "r", stdin);
	freopen("zerosum.out", "w", stdout);

	cin >> n;
	dfs(1);

	fclose(stdin);
	fclose(stdout);
	return 0;
}