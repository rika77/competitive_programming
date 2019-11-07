#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define V_MAX 200005
typedef long long ll;
typedef pair<int,int> P;
int main(){

	int n,m;
	cin >> n >> m;
	vector<int> adj[V_MAX];
	rep(i,V_MAX) {
		adj[i].reserve(V_MAX);
	}


	// 接する
	rep(i,m) {
		int u,v;
		cin >> u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	// 2点後
	for (int i=1; i<=n;i++) {
		int len = adj[i].size();
		rep(j, len) {
			rep(k, int(adj[adj[i][j]].size())) {
				if (i!=adj[adj[i][j]][k]) {
					adj[i].push_back(adj[adj[i][j]][k]);
				}
			}
		}
		// cout << "Ho"<<endl;
		// sort(adj[i].begin(), adj[i].end());
		// cout << "fefe";
		// unique(adj[i].begin(), adj[i].end());
	}

	vector<P> cnt;
	for (int i=1; i<=n;i++) {
		cnt.push_back(P((int)adj[i].size(), i));
	}
	sort(cnt.begin(), cnt.end());
	vector<int> ans(V_MAX);

	bool visited[V_MAX] = {};

	rep(i, (int)cnt.size()) {
		// 見てる点
		int v = cnt[i].second;
		rep(j, (int)adj[v].size()) {
			if (!visited[adj[v][j]]) {
				ans[v] = adj[v][j];
				visited[adj[v][j]] = true;
				break;
			}
		}
	}

	rep(i,n) {
		if (i==0) {
			cout << ans[1];
		} else {
			cout << " " << ans[i+1];
		}
	}
	cout << endl;

}