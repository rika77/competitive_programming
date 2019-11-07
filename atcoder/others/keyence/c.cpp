#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100005
typedef long long ll;

int main(){

	int n;
	cin >> n;
	ll a[MAX] = {}, b[MAX] = {};
	vector<ll> plus;
	rep(i,n) {
		cin >> a[i];
	}
	rep(i,n) {
		cin >> b[i];
	}

	ll minus_sum = 0;
	ll plus_sum = 0;
	int cnt = 0;
	rep(i,n) {
		ll dif = a[i] - b[i];
		if (dif < 0) {
			minus_sum -= dif;
			cnt++;
		} else if (dif > 0) {
			plus_sum += dif;
			plus.push_back(dif);
		}
	}

	if (cnt==0) {
		cout << "0" << endl;
		return 0;
	} else if (minus_sum > plus_sum) {
		cout << "-1" << endl;
		return 0;
	}

	sort(plus.begin(), plus.end());

	while(minus_sum > 0) {
		ll last = plus.back();
		plus.pop_back();
		minus_sum -= last;
		cnt++;
	}

	cout << cnt << endl;
	return 0;
}
