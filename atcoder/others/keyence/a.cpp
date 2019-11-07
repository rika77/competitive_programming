#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	map<int,int> m;
	rep(i,4) {
		int a;
		cin >> a;
		m[a]++;
	}

	if (m[1]&&m[9]&&m[7]&&m[4]) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}