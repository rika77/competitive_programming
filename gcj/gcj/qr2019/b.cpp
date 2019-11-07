#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

int main(){

	int t;
	cin >> t;
	rep(z,t){
		ll n;
		string s;
		cin >> n >> s;
		rep(i, (int)s.size()) {
			if (s[i] == 'S') {
				s[i] = 'E';
			} else {
				s[i] = 'S';
			}
		}

		cout << "Case #" << z+1 << ": " << s << endl;
	}
}
