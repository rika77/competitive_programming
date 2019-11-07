#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n,m,c;
	cin >> n>>m>>c;
	int bs[25] = {};
	int as[25][25] = {};

	rep(i,m) {
		cin >> bs[i];
	}

	rep(i,n) {
		rep(j,m) {
			cin >> as[i][j];
		}
	}
	ll cnt = 0;

	rep(i,n) {
		int key = c;
		rep(j,m) {
			key += as[i][j]*bs[j];
		}
		if (key>0) {
			cnt++;
		}
 	}

 	cout << cnt << endl;
 }