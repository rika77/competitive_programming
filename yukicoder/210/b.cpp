#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	ll l,r,m;
	cin >> l >> r >> m;

	ll ans;

	if (r-l+1 >= m) {
		ans = m;
	} else {
		ans = r-l+1;
	}
	cout << ans << endl;
}