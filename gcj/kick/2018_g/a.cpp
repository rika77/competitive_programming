#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

int main(){

	int t;
	cin >> t;
	rep(z,t){
		int n;
		cin >> n;
		vector<ll> nums;
		rep(i, n) {
			ll a;
			cin >> a;
			nums.push_back(a);
		}

		sort(nums.begin(), nums.end());
		ll cnt = 0;

		FOR(i, 0, n-2) {
			FOR(j, i+1, n-1) {
				FOR(k, j+1, n) {
					if (nums[i]*nums[j]==nums[k]) {
						cnt++;
					}
				}
			}
		}
		cout << "Case #" << z+1 << ": " << cnt << endl;
	}
}


