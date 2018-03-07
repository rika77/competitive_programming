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
int main(){
	ll n,a,b;
	cin >> n>>a>>b;

	if(n==1){
		if (a!=b) cout << "0" << endl;
		else cout << "1" << endl;
	}
	else {
		if (a>b) cout << "0" << endl;
		else {
			ll ans = (n-2)*(b-a) + 1;
			cout << ans << endl;
		}
	}

	return 0;
}
