#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
#define MAX 10e10
int main(){

	int n;
	cin >> n;

	ll sum = 0;
	int minus = 0;
	// 絶対値最小
	ll mi = MAX;
	rep(i,n) {
		ll a;
		cin >> a;
		if (a<0) {
			minus++;
		}
		a = abs(a);
		mi = min(mi, a);
		sum += a;
	}

	if (minus%2) {
		sum -= mi*2;
	}

	cout << sum << endl;
}
