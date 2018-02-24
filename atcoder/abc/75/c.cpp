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
#define MAX 50
typedef long long ll;

bool visit[MAX];
bool adj[MAX][MAX];
int a[MAX]={},b[MAX]={};
int n,m;

void dfs(int v){
	//O(E)
	visit[v] = 1;

	rep(i,n){
	if (!adj[v][i]) continue;
	if (visit[i]) continue;
	dfs(i);
	}
	
}

int main(){
	cin >> n>>m;
	int ans = 0;
	rep(i,m){
	cin >> a[i] >> b[i];
	a[i]--; b[i]--;
	adj[a[i]][b[i]] = adj[b[i]][a[i]] = 1;
	}

	rep(i,m){
	//各辺について削除してみて、連結かどうか調べる
	adj[a[i]][b[i]] = adj[b[i]][a[i]] = 0;

	//visitをclearする
	//O(V)
	rep(j,n){
	visit[j] = 0;
	}

	dfs(a[i]);
/*
	rep(k,n){
	cout << visit[k] << " ";
	}

	cout << endl;
*/
	if (!visit[b[i]]) {ans++;}
	adj[a[i]][b[i]] = adj[b[i]][a[i]] = 1;
	}
	cout << ans << endl;
	return 0;
}
