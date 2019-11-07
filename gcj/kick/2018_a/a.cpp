#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

bool is_div(ll a) {
	if (a%9 == 0) {
		return true;
	}
	return false;
}

bool is_nine(ll a) {
	string b = to_string(a);
	rep(i, (int)b.size()) {
		if (b[i] == '9') {
			return true;
		}
	}
	return false;
}

ll f(ll a) {
	ll y = a;
	ll x = (a/10)*10;

	ll cnt1 = 0;
	for (ll i = x; i<=y;i++) {
		if (is_div(i) || is_nine(i)) {
			continue;
		}
		cnt1++;
	}
	if (a <= 9) {
		return cnt1;
	}


	// あやし
	string s = to_string(x);

	ll cnt2 = 0;
	ll base = 9;

	for (ll i = s.size()-2; i>=0; i--) {
		cnt2 += base*(s[i] - '0');
		base *= 9;
	}

	cnt1 += (cnt2/9)*8;
	return cnt1;
}

int main(){

	int t;
	cin >> t;
	rep(z,t){
		ll a, b;
		cin >> a >> b;
		ll ans = f(b) - f(a) + 1;
		cout << "Case #" << z+1 << ": " << ans << endl;
	}
}
