#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	string s;
	cin >> s;

		for (int i=(int)s.size()-1; i>=1;i--) {
			if (s[i-1] == 'W' && s[i] == 'A') {
				s[i-1] = 'A';
				s[i] = 'C';
			}
		}

	cout << s << endl;
}
