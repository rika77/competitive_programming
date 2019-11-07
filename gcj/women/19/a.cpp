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
		if (k==r*c-1) {
				cout << "Case #" << z+1 << ": IMPOSSIBLE" << endl;
				continue;
		}
		char a[R_MAX][C_MAX];

		if (r==1) {
			a[0][0] = 'E';
			FOR(i,1,c) {
				a[0][i] = 'W';
			}
			if (k==0) {
		cout << "Case #" << z+1 << ": POSSIBLE" << endl;

			rep(i,r) {
				rep(j,c) {
					cout << a[i][j];
				}
				cout << endl;
		}
			continue;
			} 
			// k!=0
			a[0][0] = 'W';
			if (c!=k) {
				a[0][k] = 'E';
			}
		cout << "Case #" << z+1 << ": POSSIBLE" << endl;

			rep(i,r) {
				rep(j,c) {
					cout << a[i][j];
				}
				cout << endl;
		}
		continue;
		}



		if (c==1) {
			a[0][0] = 'S';
			FOR(i,1,r) {
				a[i][0] = 'N';
			}
			if (k==0) {
		cout << "Case #" << z+1 << ": POSSIBLE" << endl;

			rep(i,r) {
				rep(j,c) {
					cout << a[i][j];
				}
				cout << endl;
		}
			continue;
			} 
			// k!=0
			a[0][0] = 'N';
			if (r!=k) {
				a[k][0] = 'S';
			}
		cout << "Case #" << z+1 << ": POSSIBLE" << endl;

			rep(i,r) {
				rep(j,c) {
					cout << a[i][j];
				}
				cout << endl;
		}
		continue;
		}

		rep(i,c) {
			a[0][i] = 'S';
		}
		FOR(i,1,r) {
			rep(j,c) {
				a[i][j] = 'N';
			}
		}

		int i = 0;
		while(k>=r) {
			a[0][i] = 'N';
			i++;
			k-=r;
		}

		if (k!=0) {

				a[0][i] = 'N';
			if (k != r-1) {
				a[k][i] = 'S';
			} else {
					a[k][i] = 'E'; 
			}
		}
		// cout << k << " " << i << endl;
		cout << "Case #" << z+1 << ": POSSIBLE" << endl;
		rep(i,r) {
			rep(j,c) {
				cout << a[i][j];
			}
			cout << endl;
		}
	}
}


