/*
ID:lucypeo1
LANG:C++11
PROB:preface
*/
#include<map>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

map<int, string> nums;
void initialize() {
	nums[1000] = "M";
	nums[2000] = "MM";
	nums[3000] = "MMM";
	nums[100] = "C";
	nums[200] = "CC";
	nums[300] = "CCC";
	nums[400] = "CD";
	nums[500] = "D";
	nums[600] = "DC";
	nums[700] = "DCC";
	nums[800] = "DCCC";
	nums[900] = "CM";
	nums[10] = "X";
	nums[20] = "XX";
	nums[30] = "XXX";
	nums[40] = "XL";
	nums[50] = "L";
	nums[60] = "LX";
	nums[70] = "LXX";
	nums[80] = "LXXX";
	nums[90] = "XC";
	nums[1] = "I";
	nums[2] = "II";
	nums[3] = "III";
	nums[4] = "IV";
	nums[5] = "V";
	nums[6] = "VI";
	nums[7] = "VII";
	nums[8] = "VIII";
	nums[9] = "IX";
}


//get an integer ,return the roman number of n 
string roman(int n) {
	string s = "";
	int x = 1;
	while (n > 0) {
		int t = x * (n % 10);
		s = nums[t] + s;
		n /= 10;
		x *= 10;
	}
	return s;

}


int main() {
	freopen("preface.in", "r", stdin);
	freopen("preface.out", "w", stdout);
	int n;
	cin >> n;					//1<=N<3500
	initialize();
	map<char, int> res;
	for (int i = 1; i <= n; i++)
	{
		string s = roman(i);
		for (int j = 0; j < s.length(); j++)
			res[s[j]]++;
	}

	if (res['I'] > 0)
		cout << "I " << res['I'] << endl;

	if (res['V'] > 0)
		cout << "V " << res['V'] << endl;

	if (res['X'] > 0)
		cout << "X " << res['X'] << endl;

	if (res['L'] > 0)
		cout << "L " << res['L'] << endl;

	if (res['C'] > 0)
		cout << "C " << res['C'] << endl;

	if (res['D'] > 0)
		cout << "D " << res['D'] << endl;

	if (res['M'] > 0)
		cout << "M " << res['M'] << endl;

	fclose(stdin);
	fclose(stdout);
	return 0;
}
