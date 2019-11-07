#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// 長さN, ...c2 c1 c0
ll dp[101][4][4][4];
ll mod = 1e9 + 7;

int main(){
	int n;
	cin >> n;

	// 初期化???
	// S = 333Sとしても問題ない
	dp[0][3][3][3] = 1;

	rep(l, n+1) {
		rep(c2, 4) {
			rep(c1, 4) {
				rep(c0, 4) {
					// S: ...c2 c1 c0 という文字列にaをつけることを考える
					// = S+1: ...c2 c1 c0 a
					// 数は同じ
					rep(a, 4) {
						// printf("長さ%d %d %d %d : %lld\n", l, c2,c1,c0,dp[l][c2][c1][c0]);
						if (c1==0 && c0==1 && a==2) {
							continue;
						}
						if (c1==0 && c0==2 && a==1) {
							continue;
						}
						if (c1==1 && c0==0 && a==2) {
							continue;
						}
						if (c2==0 && c0==1 && a==2) {
							continue;
						}
						if (c2==0 && c1==1 && a==2) {
							continue;
						}

						dp[l+1][c1][c0][a] += dp[l][c2][c1][c0];
						dp[l+1][c1][c0][a] %= mod;
					}
				}
			}
		}
	}

	ll sum = 0;
	rep(c2,4) {
		rep(c1,4) {
			rep(c0,4) {
				sum += dp[n][c2][c1][c0];
				sum %= mod;
			}
		}
	}

	cout << sum << endl;
}
	

