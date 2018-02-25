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

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	int n,a,b;
	int dp[5005]={};
	cin >> n;
	rep(j,n){
		cin >> a>>b;
		dp[a]++;
		dp[b+1]--;
	}

	rep(j,5005){
		dp[j+1] += dp[j];
	}

	int m,c;
	cin >> m;
	cout << "Case #" << i+1 << ":"; 
	rep(j,m){
		cin >> c;
		cout << " " << dp[c];
	}
	cout << endl;
	}
	return 0;
}
