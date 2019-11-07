#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100000
typedef long long ll;
map<int,ll> ma;

	
int main(){
	int n,m;
	cin >> n >> m;
	ll a[MAX + 1] = {};
	ll s[MAX + 1] = {};

	cin >> a[1];
//map
	s[1] = a[1] % m;
	ma[0]++;
	ma[s[1]]++;

	for (int i=2;i<=n;i++) {
		cin >> a[i];
		s[i] = (s[i-1] + a[i]) %m;
		// mapを作る
		ma[s[i]]++;
	}

	ll cnt = 0;
/*
	for (int l = 1; l <= n; l++) {
		for (int r = l; r <= n; r++) {
			if ((s[r] - s[l-1]) % m == 0) {
				cnt++;
			}}}
*/
	// valueが2以上のものにたいして、vC2を足し合わせていく
	for (auto &item: ma) {
		if (item.second >= 2) {
			ll  v = item.second;
			cnt += v * (v-1)/2;
		}
	}

	cout << cnt << endl;
	return 0;
}
