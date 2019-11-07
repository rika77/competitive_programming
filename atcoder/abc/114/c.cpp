#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 26484
typedef long long ll;

ll n;

bool is(string s) {
	// is 753?
	bool a[3]={};
	rep(i, (int)s.size()) {
		if (s[i]=='7') {
			a[0]=1;
		} else if (s[i]=='5') {
			a[1]=1;
		} else if (s[i]=='3') {
			a[2]=1;
		} else {
			return false;
		}
	}
	if (a[0]&&a[1]&&a[2]) {
		return true;
	}
	return false;

}

ll solve(string s) {
	if (stol(s) > n) {
		return 0;
	}

	ll cnt=0; 
	if (is(s)) {
		//cout << s << endl;
		cnt++;
	}

	cnt += solve(s+"7");
	cnt += solve(s+"5");
	cnt += solve(s+"3");

	return cnt;
}

int main() {
	cin >> n;
	ll ans = solve("7") + solve("5") + solve("3");
	cout << ans << endl;
	return 0;
}

// Abstract
// 3,5,7つけていく感じが、dfsに似てるね！！！！
