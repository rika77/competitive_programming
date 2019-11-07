#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
#define MAXN 100005
#define MAXH 10005
ll dp[MAXN] = {};
ll h[MAXN] = {};
int n,k;

void make() {
	dp[1] = abs(h[1]-h[0]);

	for (int i=2; i<n; i++) {
		ll mi = -1;
		for (int j=i-k; j<=i-1; j++) {
			if (j>=0) {
				if (mi==-1) {
					mi = dp[j] + abs(h[i] - h[j]);
				} else {
					mi = min(mi, dp[j] + abs(h[i] - h[j])); 
				}
	}
		}
		dp[i] = mi;
	}
}

int main(){
	cin >> n >>k;
	rep(i,n) {
		cin >> h[i];
	}
	make();
	cout << dp[n-1] << endl;
}
