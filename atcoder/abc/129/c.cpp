#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100005
#define MOD 1000000007
typedef long long ll;

int main(){

	int n,m;
	cin >> n>>m;
	ll a[MAX] = {};

	rep(i, m) {
		cin >> a[i];
	}

	ll dp[MAX] = {};

	int br = 0;
	FOR(i, 1, n+1) {
		if (i==a[br]) {
			br++;
			continue;
		}

		if (i==1) {
			dp[1] = 1;
		} else if (i==2) {
			dp[2] = dp[1] + 1;
		} else {
			dp[i] = dp[i-1] + dp[i-2];
			dp[i] %= MOD;
		}
	}

	cout << dp[n] << endl;
}


