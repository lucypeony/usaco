/*
ID:lucypeo1
LANG:C++11
PROB:prefix
*/
/*
Longest Prefix
这一题普通的方法没用，要用dp
在我提供了好多次，前四个测试点都过了。第五个测试点过不了的时候。我才明白。
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
