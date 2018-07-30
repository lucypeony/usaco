/*
ID:lucypeo1

*/
#include<iostream>
#include<fstream>

using namespace std; 

int main() {
	freopen("concom.in", "r", stdin);
	freopen("concom.out", "w", stdout);

	//Use Union Find method
	int mappiing[101][101] = { 0 };
	
	int n;
	for (int i = 1; i <= n; i++)
	{
		int j1, j2, j3;
		cin >> j1 >> j2 >> j3;
		mapping[j1][j2] = j3;
	}



	fclose(stdin);
	fclose(stdout);
	return 0;
}