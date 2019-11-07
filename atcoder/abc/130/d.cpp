#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	ll k;
	vector<ll> a;

	cin >> n >> k;
	rep(i,n) {
		ll x;
		cin >> x;
		a.push_back(x);
	}

	int be = 0;
	int be_be = 0;
	int end = 0;

	ll ans = 0;
	while(be < n && end < n) {
		bool flag = false;

		ll sum = 0;
		for (int i = be; i < n; i++) {
			sum += a[i];
			if (sum >= k) {
				end = i;
				break;
			} else if (i == n-1) {
				flag = true;
			}
		}
		if (flag) {
			break;
		}
		if (a[be] < a[end]) {
			for (int j = be; j < end; j++) {
				sum -= a[j];
				if (sum < k) {
					be = j;
					flag = true;
					break;
				}	
			}
		}
		// cout << "be: " << be << " end: " << end << endl;
		ll left = be - be_be + 1;
		ll right = n - end;
		// cout << "left: " << left << " right: " << right << endl;

		ll sub = left * right;
		ans += sub;

		be_be = be + 1;
		be = be_be;
	}

	cout <<  ans << endl;
}

