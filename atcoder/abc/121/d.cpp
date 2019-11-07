#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

ll len(ll K) {
	// Kを２進数表記したときの桁数
	int cnt = 1;
	while(K>=2) {
		K /= 2;
		cnt++;
	}
	return cnt;
}

vector<ll> cnt(ll x) {
	// 0-xの各桁1の個数和
	vector<ll> v;
	for (ll i=0; i<len(x); i++) {
		ll a = 1ll<<(i+1);
		ll b = (x/a)*(a/2);
		if (x%a >= a/2) {
			b += x%(a/2) + 1;
		}
		v.push_back(b);
	}
	return v;
}

vector<ll> dif(vector<ll>va, vector<ll>vb) {
	// a<=b
	vector<ll> vans;
	for (ll i=0; i<(ll)vb.size(); i++) {
		ll diff;
		/// gunuuu
		if (i<(ll)va.size()) {
			diff = vb[i] - va[i];
		} else {
			diff = vb[i];
		}
		if (diff%2) {
			vans.push_back(1);
		} else {
			vans.push_back(0);
		}
	}
	return vans;
}

ll cal(vector<ll> vans) {
	ll ans = 0;
	for(ll i=0; i<(ll)vans.size(); i++) {
		if (vans[i]) {
			ans |= 1ll << i;
		}
	}
	return ans;
}

int main(){

	ll a,b;
	cin >> a>>b;

	vector<ll> va;
	if (a==0) {
		va = cnt(a);
	} else {
		va = cnt(a-1);
	}
	vector<ll> vb = cnt(b);

	// rep(i,(int)va.size()) {
	// 	cout << va[i] << " ";
	// }
	// cout << endl;
	// rep(i,(int)vb.size()) {
	// 	cout << vb[i] << " ";
	// }
	// cout << endl;
	vector<ll> vans = dif(va, vb);
	// rep(i,(int)vans.size()) {
	// 	cout << vans[i] << " ";
	// }
	// cout << endl;
	ll ans = cal(vans);

	cout << ans << endl;
}
