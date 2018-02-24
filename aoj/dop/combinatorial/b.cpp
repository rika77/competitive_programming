//Knapsack Problem

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define NMAX 101
#define WMAX 10001
int dp[NMAX][WMAX] = {};
struct Item {int v, w;};

int main() {
	int n,w;
	Item items[NMAX+1] = {};
	cin >> n >> w;
	
	for(int i=1;i<=n;i++) {
	cin >> items[i].v >> items[i].w;
	}
	
	for(int weight=1;weight<=w;weight++) {
	for(int goods=1;goods<=n;goods++) {
	if (items[goods].w <= weight) {
	dp[goods][weight] = max(dp[goods-1][weight-items[goods].w] + items[goods].v, dp[goods-1][weight]);
	}
	else 
	{
	dp[goods][weight] = dp[goods-1][weight];
	}
	}
	}
/*
	for (int i=0;i<=w;i++) {
	for (int j=0;j<=n;j++) {
	cout << dp[i][j] << " ";
	}
	cout << endl;
	}	
*/
	cout << dp[n][w] << endl;
	return 0;
}	



