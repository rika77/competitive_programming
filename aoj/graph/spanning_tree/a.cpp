#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define V_MAX 10005
typedef long long ll;

struct edge {
	int s,t;
	ll w;
};

bool comp(const edge& e1, const edge& e2) {
	return e1.w < e2.w;
}

// Union-Find tree
ll par[V_MAX];
ll ran[V_MAX];

// Init
void init(int V) {
	rep(i, V) {
		par[i] = i;
		ran[i] = 0;
		size[i] = 1;
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
		return ;
	}

	if (ran[x] < ran[y]) {
		par[x] = y;
		size[y] += size[x];
		size[x] = 0;
	} else {
		par[y] = x;
		if (ran[x]==ran[y]) ran[x]++;
		size[x] += size[y]
	}
}

// Same?
bool same(ll x, ll y) {
	return find(x) == find(y);
}

int main(){
	int V, E;
	cin >> V >> E;
	vector<edge> es;	//edge集合

	init(V);
	rep(i,E) {
		int s,t;
		ll w;
		cin >> s>>t>>w;
		es.push_back({s,t,w});
	}

	sort(es.begin(), es.end(), comp);
	ll ans = 0;

	rep(i, E) {
		int s,t;
		ll w;
		s = es[i].s;
		t = es[i].t;
		w = es[i].w;
		if (!same(s,t)) {
			unite(s,t);
			ans+=w;
		}
	}
	cout << ans << endl;
}


