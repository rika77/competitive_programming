#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int N;

bool is_753(ll n) {
	string str = to_string(n);
	bool a[3] = {};
	rep(i, (int)str.size()) {
		if (str[i] == '7') {
			a[0] = 1;
		} else if (str[i] == '5') {
			a[1] = 1;
		} else if (str[i] == '3') {
			a[2] = 1;
		} else {
			return false;
		}
	}

	if (a[0]&&a[1]&&a[2]) {
		return true;
	}
	return false;
} 

int solve(ll k) {
	if (k > N) {
		return 0;
	}
	int cnt = 0;
	if (is_753(k)) {
		cnt++;
	}
	cnt+=solve(k*10 + 7);
	cnt+=solve(k*10 + 5);
	cnt+=solve(k*10 + 3);
	return cnt;
}

int main(){
	cin >> N;
	int cnt = solve(0);
	cout << cnt << endl;

	return 0;
}