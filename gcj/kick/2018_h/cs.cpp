#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MOD 1000000007
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

ll cal(ll k, ll m, ll n) {

	ll ans = 1;

	for (ll i = m; i >= m-k+1; i--) {
		ans *= i;
		ans %= MOD;
	}

	for (ll i = 2*n - k; i >= k + 1; i--) {
		ans *= i;
		ans %= MOD;
	}

	for (ll i = 0; i < k; i++) {
		ans *= 2;
		ans %= MOD;
	}

	return ans;
}

int main(){

	int t;
	cin >> t;
	rep(z,t){
		ll m, n;
		cin >> n >> m;
		ll ans = 0;
		rep(i, m+1) {
			ll ca = cal(i, m, n);
			// cout << i << " " <<  ca << endl;
			if (i%2) {
				ans -= ca;
			} else {
				ans += ca;
			}
			ans %= MOD;
		}
		if (ans < 0) {
			ans += MOD;
		}
		cout << "Case #" << z+1 << ": " << ans << endl;

	}
// 回答を理解している途中
// ほぼ理解したが、最後の難関。
// 並べ方が不問かどうかという話yrtttt
		
}