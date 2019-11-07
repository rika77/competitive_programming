#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;

int main(){

	int t;
	cin >> t;
	rep(z,t) {
		int n;
		string a;
		cin >> n >> a;
		vector<ll> nums;
		rep(i, (int)a.size()) {
			int num = (int)a[i] - '0';
			// これできんのかな？
			nums.push_back(ll(num));
		}

		int cnt0 = n/2 + n%2;
		int cnt1 = n/2;

		ll ma = 0;
		rep(i, cnt0) {
			ma += nums[i];
		}

		ll tem = ma;
		rep(i, cnt1) {
			tem = tem - nums[i] + nums[i + cnt0];
			ma = max(ma, tem);
		}

		cout << "Case #" << z+1 << ": " << ma << endl;
	}
	return 0;
}


