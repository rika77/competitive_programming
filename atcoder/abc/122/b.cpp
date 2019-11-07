#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	string s;
	cin >> s;
	int ma = 0;
	int cnt = 0;
	rep(i,(int)s.size()) {
		if (s[i]!='A'&&s[i]!='C'&&s[i]!='G'&&s[i]!='T') {
			ma = max(ma, cnt);
			cnt = 0;
		} else {
			cnt++;
		}
	}
	ma = max(ma, cnt);
	cout << ma << endl;
}
