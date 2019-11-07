#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	string s;
	cin >> s;
	int cnt0 = 0, cnt1 = 0;
	rep(i, (int)s.size()) {
		if (s[i] == '0') {
			cnt0++;
		} else {
			cnt1++;
		}
	}

	int ans = cnt0+cnt1-abs(cnt1-cnt0);
	cout << ans << endl;
}
