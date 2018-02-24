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
#define MAX 50000
typedef long long ll;
int dp[10][MAX]={};

int main(){
	int h,w,a;
	cin >> h>>w;
	int p[h][w];
	int f[h][w];
	rep(i,h){
	rep(j,w){
	cin >> p[i][j];
	}}

	rep(i,h){
	rep(j,w){
	cin >> a;
	p[i][j] -= a;
	f[h][w] = a;
	}}
	
	rep(i,h){
	bool flag[w]={};
	rep(j,w){
	if (!i){
	dp[0][j]=dp[0][j-1]+p[i][j];
	}
	else{
	if (dp[i-1][j]>=dp[i][j-1]){
	dp[i][j]=dp[i-1][j]+p[i][j];
	}
	else{	
	dp[i][j]=dp[i][j-1]+p[i][j];
	flag[j]=1;
	}
	}
	}
	for(int j=w-2;j>=0;j--){
	if(i){
	if(!flag[j]){
	dp[i][j]=max(dp[i][j],dp[i][j+1]+p[i][j]);
	}
	else{
	dp[i][j]=max(dp[i][j],dp[i][j+1]-f[i][j]);
	}
	}
	}

	}

	rep(i,w){
	cout << dp[h-1][i] << endl;
	}

	return 0;
}	
