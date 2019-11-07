#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100003
typedef long long ll;

// c++はグローバルに置くと勝手に初期化されるマジ?
int dp[MAX];
int n,q;
string s;

void make() {
	int i = 0;
	dp[0] = 0;
	while(1) {
		if (s[i]=='A'&&s[i+1]=='C') {
			dp[i+1] = dp[i] + 1;
		} else {
			dp[i+1] = dp[i];
		}
		if (i+1==n-1) {
			break;
		}
		i++;
	}

	// rep(i,n) {
	// 	cout << i << " " << dp[i] << endl;
	// }
}

int main(){
	cin >> n>>q>>s;
	make();
	rep(i,q) {
		int l,r;
		cin >> l>>r;
		cout << dp[r-1]-dp[l-1]<< endl;
	}
}

