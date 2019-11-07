#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
#define MAX 100005
int main(){

	int n;
	cin >> n;

	ll monsters[MAX] = {};

	rep(i,n+1){
		cin >> monsters[i];
	}

	ll ans = 0;

	rep(i,n) {
		ll taosu;
		cin >> taosu;
		if (taosu >= monsters[i]) {
			// 最初の敵
			ll rest_taosu = taosu - monsters[i];
			ans += monsters[i];

			// 2nd
			if (rest_taosu >= monsters[i+1]) {
				ans += monsters[i+1];
				monsters[i+1] = 0;
			} else {
				ans += rest_taosu;
				monsters[i+1] -= rest_taosu;
			}
		} else {
			ans += taosu;
		}
	}

	cout << ans << endl;
}