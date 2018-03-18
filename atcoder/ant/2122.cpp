#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

//隣接リスト作る時--を忘れずに！！
bool flag;
int visit[100] = {};
int n,m;
int u,v;
vector<int> adj[100];
int edges, nodes;

void dfs(int node){
	if (visit[node]) {
		return;
	}
	//if not visited
	visit[node] = 1;
	nodes++;
	int s = adj[node].size();
	edges += s;
	rep(i, s){
		dfs(adj[node][i]);
	}
	//一点も接続してないときにも帰れる用に
	return;
}


int main(){
	cin >> n >> m;
	int cnt = 0;

	rep(i,m){
		cin>>u>>v;
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	rep(i,n){
		if (!visit[i]) {
			edges = 0;
			nodes = 0;
			dfs(i);
		//	cout << edges/2 << " " << nodes << endl;
			if (edges/2 + 1 == nodes) {
				cnt++;
			}
		}
	}

	cout << cnt << endl;
}
