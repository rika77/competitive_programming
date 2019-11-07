#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define INF 1e12
typedef long long ll;

ll find_min(ll x, ll s1, ll s2, ll t1, ll t2) {
	//cout << s1 << " " << s2 << " " << t1 << " " << t2 << endl;
	ll a[8] = {s1, s1, s2, s2, t1, t1, t2, t2};
	ll b[8] = {t1, t2, t1, t2, s1, s2, s1, s2};

	ll mi = INF;
	rep(i,8) {
		mi = min(mi, abs(a[i]-x)+abs(b[i]-a[i]));
	}

	return mi;
}

int main(){
	int a,b,q;
	cin >> a >> b >> q;
	vector<ll> s,t,xs;

	rep(i,a) {
		ll x;
		cin >> x;
		s.push_back(x);
	}

	rep(i,b) {
		ll x;
		cin >> x;
		t.push_back(x);
	}

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	rep(i,q) {
		ll x;
		cin >> x;
		ll s1,s2,t1,t2;
		auto it_s1 = lower_bound(s.begin(), s.end(), x);
		if (it_s1 >= s.end()) { 
			s1 = INF;
		} else if (it_s1 < s.begin()) {
			s1 = -1 * INF;
		} else {
			s1 = *it_s1;
		}
		auto it_s2 = it_s1 - 1;
		if (it_s2 >= s.end()) {
			s2 = INF;
		}else if (it_s2 < s.begin()) {
			s2 = -1 * INF;
		}  else {
			s2 = *it_s2;
		}

		auto it_t1 = lower_bound(t.begin(), t.end(), x);
		if (it_t1 >= t.end()) {
			t1 = INF;
		}else if (it_t1 < t.begin()) {
			t1 = -1 * INF;
		}  else {
			t1 = *it_t1;
		}
		auto it_t2 = it_t1 - 1;
		if (it_t2 >= t.end()) {
			t2 = INF;
		}else if (it_t2 < t.begin()) {
			t2 = -1 * INF;
		}  else {
			t2 = *it_t2;
		}

		
		cout << find_min(x, s1,s2,t1,t2) << endl;
	}
}

