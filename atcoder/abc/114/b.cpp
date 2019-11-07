#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	string s;
	cin >> s;

	int l = s.size();

	int mi = 1000;

	FOR(i, 0, l-2) {
		mi = min(mi, abs((s[i]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0') - 753));
	}

	cout << mi << endl;
	return 0;
}