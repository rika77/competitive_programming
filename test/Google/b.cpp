#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 20
typedef long long ll;
int ma;
bool visit[MAX];
vector<int> G[MAX];
// cout << "Case #" << i+1 << ": " << ans << endl;

void dfs(int node, int dis){
		visit[node] = true;
		if (G[node].size() == 0){
			ma = max(ma,dis);	//端点に来たら、更新
			return;
		}

		rep(i,G[node].size()){
			dfs(G[node][i],dis+1);
		}
	
}

int main(){
	int t;
	cin >> t;
	rep(i,t){
	//visit,Gを空にする
	
	rep(j,MAX) {
		visit[j] = false;
	}
	rep(j,MAX) {
		G[j].clear();
	}
	int n,m,a,b;
	cin >> n>>m;
	rep(j,m){
		cin >>a>>b; a--; b--;
		G[a].push_back(b);
	}
	ma = 0;
	 
	rep(j,n){
		if(!visit[j]){
			dfs(j,0);
		}
	}
		
	cout << "Case #" << i+1 << ": " << ma+1 << endl;
	}
	return 0;
}
