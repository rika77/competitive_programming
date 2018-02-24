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

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t,f,s,fi,se;
	cin >> t;
	rep(i,t){
	int map[101][101]={};
	int cnt[101]={};
	cin >> f>>s;
	int maxi = 0;
	rep(j,f){
	cin >> fi >> se;
	if (map[fi][se] || map[se][fi]) {continue;}
	else map[fi][se] = map[se][fi] = 1;	//ok?

	if (fi==se) {cnt[fi]++;}
	else {
	cnt[fi]++;
	cnt[se]++;
	}
	}
	rep(j,s+1){
	maxi = max(maxi, cnt[j]);
	}
	cout << "Case #" << i+1 << ": " << maxi << endl;
	}
	return 0;
}
