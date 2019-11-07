#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int n,m;
	cin >> n>>m;
	priority_queue<ll> Q;
	rep(i,n) {
		ll a;
		cin >> a;
		Q.push(a);
	}

	rep(i,m) {
		ll k = Q.top(); Q.pop();
		Q.push(k/2);
	}

	ll ans = 0;
	while(!Q.empty()) {
		ll k = Q.top(); Q.pop();
		ans += k;
	}

	cout << ans << endl;
}


