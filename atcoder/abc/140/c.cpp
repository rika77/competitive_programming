#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	cin >> n;
	int b[1000000] = {};

	rep(i,n-1) {
		cin >> b[i];
	}

	int ans = b[0];
	rep(i,n-2) {
		ans+=min(b[i], b[i+1]);
	}
	ans += b[n-2];

	cout << ans << endl;
}
