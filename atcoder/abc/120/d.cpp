#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
#define V_MAX 100005
#define E_MAX 100005

struct edge {
	int s,t;
};

// Union-Find tree
ll par[V_MAX];
ll ran[V_MAX];
ll siz[V_MAX];

// Init
void init(ll V) {
	for (ll i = 0; i<V; i++) {
		par[i] = i;
		ran[i] = 0;
		siz[i]  = 1;
	}
}

// Find root
ll find(ll x) {
	if (par[x]==x) {
		return x;
	}
	return par[x] = find(par[x]);
}

// Unite
void unite(ll x, ll y) {
	x = find(x);
	y = find(y);
	if (x==y) {
		return;
	}

	if (ran[x] < ran[y]) {
		par[x] = y;
		// リーダーはyになりました。
		siz[y] += siz[x];
	} else {
		par[y] = x;
		if (ran[x]==ran[y]) ran[x]++;
		// リーダーはxになりました。
		siz[x] += siz[y];
	}

}

// In Same group? // Connected?
bool same(ll x, ll y) {
	return find(x) == find(y);
}

ll cnt(ll x) {
	// 島xが属する郡のrootまでたどって、その部族の人数を返す
	// rootしか、その部族の人数は知らん
	return siz[find(x)];
}


int main() {
	ll V,E;
	cin >> V >> E;
	vector<edge> es;
	for (ll i = 0; i<E; i++) {
		int s,t;
		cin >> s>>t;
		s--; t--;
		es.push_back({s,t});
	}
	init(V_MAX);
	vector<ll> ans(E_MAX,0);
	// ans[i] : i個の橋がつながっている時の不便さ
	ans[0] = V*(V-1)/2;

	for (ll i = 0; i<E; i++) {
			ll dif;	//便利さ増加分
			edge e = es[E-i-1];
			if (same(e.s,e.t)){
				ans[i+1] = ans[i];
				continue;
			}
			dif = cnt(e.s)*cnt(e.t);
			// cout << cnt(e.s) << " " << cnt(e.t) << endl;
			unite(e.s, e.t);
			ans[i+1] = ans[i] - dif;
	}

	for (ll i = E -1; i>=0; i--) {
		cout << ans[i] <<endl;
	}
	return 0;
}