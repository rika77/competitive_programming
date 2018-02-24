#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
#define MAX 87
#define ll long long
ll dp[MAX] = {};

void make() {
	dp[0] = 2;
	dp[1] = 1;
	for (int i=2;i<MAX;i++) {
	dp[i] = dp[i-1] + dp[i-2];
	}
}

int main() {
	make();
	int n;
	cin >> n;
	cout << dp[n] << endl;
	return 0;
}
