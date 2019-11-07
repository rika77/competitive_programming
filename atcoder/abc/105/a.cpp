#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	// warikiretara 0
	// else 1
	int n,k;

	cin >> n >> k;
	int ans;
	if (n%k == 0) {
		ans = 0;
	}
	else {
		ans = 1;
	}

	cout << ans << endl;
	return 0;
}
