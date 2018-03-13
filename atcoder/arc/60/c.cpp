#include<bits/stdc++.h>
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
typedef long long ll;
ll dp[50][5000] = {};
ll x[50] = {};
ll n,a;

void make(){
	//今回は例でくれてたけど...
	if (x[0] == 0){
		dp[0][2450]=2;
	}
	else{
	dp[0][x[0]+2450] = dp[0][2450] = 1;
	}
	FOR(i,1,n){
		rep(j,4901){
			dp[i][j] = dp[i-1][j] + dp[i-1][j-x[i]];
		}
	}
}

int main(){
	cin >> n>>a;
	ll sub;
	rep(i,n){
		cin >> sub;
		x[i] = sub-a;
	}

	make();
	/*
	rep(i,n){
		FOR(j,2449,2453){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	*/
	cout << dp[n-1][2450] - 1 << endl;
}
