#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, int> P;
#define MAXN 105
#define MAXW 100005
ll dp[MAXN][MAXW] = {};
ll w[MAXN] = {};
ll v[MAXN] = {};
ll N,W;

void make() {

	for (ll i=0; i<N; i++) {
		for (ll j=0; j<=W; j++) {
			if (j>=w[i]) {
				dp[i+1][j] = max(dp[i][j-w[i]]+v[i], dp[i][j]);
			} else {
				dp[i+1][j] = dp[i][j];
			}
			// cout << dp[i+1][j] << " ";
	}
	// cout << endl;
	}
}

int main(){
	cin >> N >> W;
	rep(i,N) {
		cin >> w[i] >> v[i];
	}
	make();
	cout << dp[N][W] << endl;
}
