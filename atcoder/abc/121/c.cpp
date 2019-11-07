#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<ll,ll> P; // a¥ b本
int main(){

	// 安い順に買う
	ll n,m;
	cin >> n>>m;
	vector<P> v;
	for (ll i=0; i<n;i++) {
		ll ina,inb;
		cin >> ina>>inb;
		v.push_back(P(ina,inb));
	}

	sort(v.begin(), v.end());

	// rep(i,(int)v.size()) {
	// 	cout << v[i].first << " " << v[i].second <<endl;
	// }

	ll ans = 0;
	for (ll i=0; i<(ll)v.size(); i++) {
		while(m>0 && v[i].second>0) {
			v[i].second--;
			ans+=v[i].first;
			m--;
		}
	}

	cout << ans << endl;
	return 0;
}