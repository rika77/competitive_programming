#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
#define MAX 101
int dp[MAX][MAX] = {};

void make(){

	for (int i=1;i<MAX;i++) {
	dp[1][i] = 1;
	dp[i][1] = 1;
	}	
	
	for (int i=2;i<MAX;i++) {
	for (int j=2;j<MAX;j++) {
	dp[i][j] = dp[i][j-1];
	int tem = (int)floor((double)i/(double)j);
	for (int k=1;k<=tem;k++) {
	dp[i][j] += dp[i-k][j-1] - dp[i-k][j-2];
	}
	}
	}
	for (int i=0;i<6;i++) {
	for (int j=0;j<6;j++) {
	cout << dp[i][j] << " ";
	}
	cout << endl;
	}
}

int main() {
	make();
	cout << dp[5][4] << endl;
	return 0;
}
