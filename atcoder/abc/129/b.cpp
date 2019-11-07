#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int s = 0;
	int n;
	cin >> n;
	int w[102] = {};

	rep(i, n) {
		cin >> w[i];
		s += w[i];
	}

	int ans = 1000000;

	int sub = 0;
	rep(i, n) {
		sub += w[i];
		ans = min(ans, abs(s-2*sub));
		//cout << ans << endl;

	}

	cout << ans << endl;
}
