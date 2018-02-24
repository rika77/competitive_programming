#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[2][n],dp[2][n];
	rep(i,2){
	rep(j,n){
	cin >> a[i][j];
	dp[i][j] = 0;
	}}

	rep(i,2){
	rep(j,n){
	if (i==0&&j==0) {
	dp[0][0] = a[0][0];
	}
	else if (i==0) {
	dp[0][j] = dp[0][j-1] + a[i][j];
	}
	else if (j==0) {
	dp[1][0] = dp[0][0] + a[1][0];
	}
	else{
	dp[1][j] = max(dp[0][j],dp[1][j-1]) + a[i][j];
	}
	}
	}
/*
	rep(i,2){
        rep(j,n){
	cout << dp[i][j] << " ";
	}
	cout << endl;
	}
*/

	cout << dp[1][n-1] << endl;
	return 0;
}
	
