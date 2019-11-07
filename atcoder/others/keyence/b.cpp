#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	string s;
	cin >> s;
	string t = "keyence";
	if (s==t) {
		cout << "YES" << endl;
		return 0;
	}
	rep(i, (int)s.size()) {
		FOR(j, i, (int)s.size()) {
			string fi = s.substr(0, i);
			string se = s.substr(j+1);

			if (fi+se == t) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;
	return 0;
}