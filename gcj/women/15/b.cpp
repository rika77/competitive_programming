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
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	ll k,v;
	cin  >> k>>v;
	ll ans=k+1;
	for(ll j=1;j<v+1;j++){
	ans /= j;
	ans *= k+j-1;
	cout << j << " " << ans<<endl;
	}
	ans *= (v+1)*(v+1);
	cout << "Case #" << i+1 << ": " << ans << endl;
	}
	return 0;
}
