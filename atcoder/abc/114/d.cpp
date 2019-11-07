#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
map<int,int> M = {};

void factor(int n) {
	// nを素因数分解するんご
	for (int i = 2; i<=n; i++) {
		while(n%i==0) {
			M[i]++;
			n/=i;
		}
	}
}

void make(int n) {
	// n!までfactor out
	for (int i=2; i<=n; i++) {
		factor(i);
	}
}

int main(){

	int n;
	cin >> n;
	make(n);

	if (n<=9) {
		cout << "0" << endl;
		return 0;
	}

	int ans;
	int cnt2=0,cnt4=0,cnt24=0,cnt14=0,cnt74=0;

	for (auto &p : M) {
		// cout << p.first << " " << p.second << endl;
		if (p.second >= 2) {
			cnt2++;
		}
		if (p.second >= 4) {
			cnt4++;
		}
		if (p.second >= 24) {
			cnt24++;
		}
		if (p.second >= 14) {
			cnt14++;
		}
		if (p.second >= 74) {
			cnt74++;
		}
	}
	ans = (cnt2-2) * cnt4 * (cnt4-1) / 2;
	ans += cnt24 * (cnt2-1);
	ans += cnt14*(cnt4-1);
	ans += cnt74;
	// cout << cnt2 << " " << cnt4 << endl;
	cout << ans << endl;
}

