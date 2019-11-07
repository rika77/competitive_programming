#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){


	string s;
	cin >> s;

	rep(i, (int)s.size()) {
		if (i%2==0) {
			if (s[i]=='R'||s[i]=='U'||s[i]=='D') {
				continue;
			} else {
				cout << "No" << endl;
				return 0;
			}
		} else {
			if (s[i]=='L'||s[i]=='U'||s[i]=='D') {
				continue;
			} else {
				cout << "No" << endl;
				return 0;
			}

		}
	}
	cout << "Yes" << endl;
}