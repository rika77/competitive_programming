// Union-Find tree
ll par[V_MAX];
ll ran[V_MAX];

// Init
void init(int V) {
	rep(i, v) {
		par[i] = i;
		ran[i] = 0;
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
	} else {
		par[y] = x;
		if (ran[x]==ran[y]) ran[x]++;
	}
}

// Same?
bool same(ll x, ll y) {
	return find(x) == find(y);
}