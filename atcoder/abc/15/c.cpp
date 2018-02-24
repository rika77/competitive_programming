//多分dfsでもメモ化すると速いけどとりあえず保留


#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

static int N,K;
int in[5][5]={};

bool dfs(int q, int value){
	if(q==N) return !value;

	rep(i,K){
	if(dfs(q+1,value^in[q][i])) return true;
	}
	return false;
}

int main(){
	cin >> N>>K;

	rep(i,N) {
	rep(j,K) {
	cin >> in[i][j];
	}
	}

	if (dfs(0,0)) cout << "Found" << endl;
	else cout << "Nothing" << endl;

	return 0;
}

