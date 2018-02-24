#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) FOR(i,0,n)
#define ll long long

int n,k;
int t[6][6] = {};

bool dfs(int num, int val){
	if (num==n) return val==0;

	rep(i,k) {
		if (dfs(num+1,val^t[num][i])){
		return true;
		}
	}
	return false;
}

int main(){
	cin >> n>>k;	
	
	rep(i,n){
	rep(j,k){
	cin >> t[i][j];
	}}

	if (dfs(0,0)) cout << "Found" << endl;
	else cout << "Nothing" << endl;

	return 0;
}
