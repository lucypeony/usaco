/*
ID:lucypeo1
LANG:C++11
PROB:prefix
*/
/*
Longest Prefix
��һ����ͨ�ķ���û�ã�Ҫ��dp
�����ṩ�˺ö�Σ�ǰ�ĸ����Ե㶼���ˡ���������Ե�����˵�ʱ���Ҳ����ס�

��̬ת�Ʒ��̣�
��dp[i]Ϊ��iΪֹ���Ӵ���ɵ������
dp[i]= max{dp[i-1],  dp[i-length(p[j]) + length(p[j])}
*/
#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	freopen("prefix.in", "r", stdin);
	freopen("prefix.out", "w", stdout);
	vector<string> primitives;
	string s;
	while (cin >> s, s != ".") {
		primitives.push_back(s);
	}

	string seq;
	while (cin >> s) {
		seq += s;
	}

	//dp[i]= max{dp[i-1],  dp[i-length(p[j]) + length(p[j])}
	int dp[200010] = { 0 };
	int l = seq.size();
	for (int i = 1; i <= l; i++) {
		dp[i] = dp[i - 1];
		for (auto p : primitives) {
			int plen = p.size();
			if (plen <= i) {
				string t = seq.substr(i - plen, plen);
				if (t == p) {
					if (dp[i] < dp[i - plen] + plen)
						dp[i] = dp[i - plen] + plen;
				}
					
			}
		}
	}

	for (int i = 0; i < l; i++)
		if (ans < dp[i])
			ans = dp[i];

	cout << ans << endl;

	fclose(stdin);
	fclose(stdout);
}
