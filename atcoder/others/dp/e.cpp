#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, int> P;
#define MAXN 105
#define MAXV 1005
#define MAXS 100005
#define INF 2e9		//Max weight sum
ll dp[MAXS] = {};
ll w[MAXN] = {};
ll v[MAXN] = {};
int N,W;

void make() {
	rep(i, MAXS) {
		dp[i] = INF;
	}
	dp[0] = 0;

	rep(i, N) {
		for (int j=10000; j>=0 ; j--) {
			if (j>=v[i]) {
				dp[j] = min(dp[j], dp[j-v[i]] + w[i]);
			}
		}
	}
}


int main(){
	cin >> N >> W;
	rep(i,N) {
		cin >> w[i] >> v[i];
	}
	make();
	ll v = 0;
	for (int i = 10000; i>=0; i--) {
		// cout << i << " "  << dp[i] << endl;
		if (dp[i]<=W ) {
			v = i;
			break;
		}
	}
	cout << v << endl;
}
