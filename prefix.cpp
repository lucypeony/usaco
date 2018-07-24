/*
ID:lucypeo1
LANG:C++11
PROB:prefix
*/
/*
Longest Prefix
��һ����ͨ�ķ���û�ã�Ҫ��dp
�����ṩ�˺ö�Σ�ǰ�ĸ����Ե㶼���ˡ���������Ե�����˵�ʱ���Ҳ����ס�
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

	

	cout << ans << endl;

	fclose(stdin);
	fclose(stdout);
}
