#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define N_MAX 100005
typedef long long ll;

ll n,k,a[N_MAX];	
ll l;
vector<ll> ks,best; // ks : Kを2進数表記, best : 最適解

ll len(ll K) {
	// Kを２進数表記したときの桁数
	ll cnt = 1;
	while(K>=2) {
		K /= 2;
		cnt++;
	}
	return cnt;
}

ll f(ll x) {
	// f(x)を計算する O(n)
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ans += x ^ a[i];
	}
	return ans;
}

ll make(ll i) {
	// l-1 ~ i+1 bitはks
	// iは0
	// i-1 ~ 0 bitはbest
	ll ans = 0;
	for (ll j = 0; j < i; j++) {
		if (best[j]) {
			ans |= (1ll << j);
		}
	}
	for (ll j = i+1; j < l; j++) {
		if (ks[j]) {
			ans |= (1ll << j);
		} 
	}
	return ans;
}

int main(){
	cin >> n>>k;

	l = len(k);
	for (ll i = 0; i < n;i++) {
		cin >> a[i];
	}

	for (ll i = 0; i < l;i++) {	// iは桁数を表す
		int cnt0 = 0, cnt1 = 0;
		for (ll j = 0; j < n;j++) { // jはa配列のどれを巡っているかを表す
			if (a[j]& (1ll >> i)) {
				cnt1++;
			} else {
				cnt0++;
			}
		}
		if (cnt1 >= cnt0) {
			best.push_back(0);
		} else {
			best.push_back(1);
		}
	}

	for (ll i = 0; i < l;i++) {
		ks.push_back(k&(1ll>>i));
	}

	// rep(i, (int)ks.size()) {
	// 	cout << ks[i];
	// }
	// cout << endl;

	// K以下で最適解探す
	ll ma = f(k);
	for (ll i = 0; i < l;i++) {
		if (ks[i]) {
			ma = max(ma, f(make(i)));
		}
	}

	cout << ma << endl;
}

