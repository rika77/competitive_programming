#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MOD 1000000007
#define NMAX 100001
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

vector<ll> two(NMAX);
vector<ll> fac(2*NMAX);
vector<ll> kfac(NMAX);

ll cal_fac(ll x, ll n) {
	// calculate x^n MOD
	ll ans = 1;
	while (n!=0) {
		if (n%2) {
			ans = ans * x%MOD;
		}
		x = x*x%MOD;
		// n /= 2;
		n = n >> 1;
	}
	return ans;
}

void make() {
	// precompute n!, k!^(M-2), 2^n

	// precompute n!
	fac[0] = 1;
	FOR(i, 1, 2*NMAX) {
		fac[i] = i*fac[i-1]%MOD;
	}

	// precompute k!^(M-2)
	kfac[0] = 1;
	FOR(i, 1, NMAX) {
		kfac[i] = kfac[i-1] * cal_fac(i, MOD-2)%MOD;
	}

	// precompute 2^n
	two[0] = 1;
	FOR(i, 1, NMAX) {
		two[i] = 2*two[i-1]%MOD;
	}
}

// calculate nCk
ll cal_c(ll n, ll k) {
	ll ans = fac[n];
	ans = ans * kfac[k] %MOD;
	ans = ans * kfac[n-k] %MOD;
	return ans;
}

ll cal(ll k, ll m, ll n) {
	ll ans = fac[2*n - k];
	ans = ans *two[k]%MOD;
	ans = ans * cal_c(m, k)%MOD;
	return ans;
}

int main(){

	int t;
	cin >> t;
	make();
	rep(z,t){
		ll m, n;
		cin >> n >> m;
		ll ans = 0;
		for (ll i = 0; i <= m; i++) {
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
		
// からのフェルマーの定理/Combination
// 1. x *= x% MODはだめで、 x = x*x%MODにせんとやった。優先順位変わるもんね。
// 2. facの配列は(2*n-k)!の計算があるので、2*nまで用意しなきゃだった。

}