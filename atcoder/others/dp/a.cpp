#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, int> P;
#define MAXN 100005
ll dp[MAXN][3] = {};
ll a[MAXN] = {};
ll b[MAXN] = {};
ll c[MAXN] = {};
ll n;

void make() {

	dp[0][0] = a[0];
	dp[0][1] = b[0];
	dp[0][2] = c[0];

	for (int i=1; i<n; i++) {
		dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i];
		dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + b[i];
		dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + c[i];
	}
}

int main(){
	cin >> n;
	rep(i,n) {
		cin >> a[i] >> b[i] >> c[i];
	}
	make();
	ll ma = max(dp[n-1][0], dp[n-1][1]);
	ma = max(ma, dp[n-1][2]);
	cout << ma << endl;
}
