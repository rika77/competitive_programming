#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	char a;
	int cnt = 0;
	rep(i,4) {
		cin >> a;
		if (a=='2') {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}

