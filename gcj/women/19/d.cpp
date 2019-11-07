#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define R_MAX 102
#define C_MAX 102
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

int main(){

	int t;
	cin >> t;
	rep(z,t){
		int r,c,k;
		cin >> r>>c>>k;
		if (r==1&&k==c-1) {
				cout << "Case #" << z+1 << ": IMPOSSIBLE" << endl;
				continue;
		}
		if (c==1&&k==r-1) {
				cout << "Case #" << z+1 << ": IMPOSSIBLE" << endl;
				continue;
		}
		char a[R_MAX][C_MAX];

		rep(i,c) {
			a[0][i] = 'N';
		}
		FOR(i,1,r) {
			rep(j,c) {
				a[i][j] = 'S';
			}
		}

		int i = 0;
		while(k>=r) {
			a[0][i] = 'N';
			i++;
			k-=r;
		}

		a[0][0] = 'N';
		if (i==0) {			
			a[0][k] = 'E';
		} else {
			a[0][k] = 'W';
		}

		cout << "Case #" << z+1 << ": POSSIBLE" << endl;
		rep(i,r) {
			rep(j,c) {
				cout << a[i][j];
			}
			cout << endl;
		}
	}
}


