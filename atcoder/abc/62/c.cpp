#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	ll h,w;
	cin >> h >> w;

	if (h%3 == 0 || w%3==0) {
		cout << "0" << endl;
		return 0;
	}

	if (h%2==0 && w%2==0) {
		cout << min(h/2, w/2) << endl;
		return 0;
	}

	if (h%2==0) {
		cout << h/2 << endl;
		return 0;

	}

	if (w%2==0) {
		cout << w/2 << endl;
		return 0;

	}

	ll hs[4] = {h/2, h/2, h/3, h/3+1};
	ll hl[4] = {h - hs[0], h- hs[1], h - hs[2],h - hs[3]};
 
 	ll ws[4] = {w/3, w/3+1, w/2, w/2};
 	ll wl[4] = {w-ws[0], w-ws[1], w-ws[2], w-ws[3]};

 	ll ans = 10000000000;
 	rep(i,4) {
 		ll S1=hs[i]*wl[i];
 		ll S2=hl[i]*wl[i];
 		ll S3=h*ws[i];
 		ll SMAX = max({S1, S2, S3});
 		ll SMIN = min({S1, S2, S3});
 		ans = min(ans, SMAX - SMIN);
 	}
 	ans = min({ans, h,w});
 	cout << ans << endl;

}