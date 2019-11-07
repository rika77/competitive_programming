#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

ll make_s(ll n) {
	string a = to_string(n);

	rep(i, (int)a.size()) {
		if (a[i]%2) {
			a[i] -= 1;
			FOR(j, i+1, (int)a.size()) {
				a[j] = '8'
			}
			break;
		}
	}

	// これ0はカットできてるのかcheckせよ
	return stoll(a);
}

ll make_b(ll n) {
	string a = to_string(n);
	rep(i, (int)a.size()) {
		if (a[i]%2) {
			a[i] += 1;
			FOR(j, i+1, (int)a.size()) {
				a[j] = '0'
			}
			if (a[i]!='9') {
				a[i]+=2;
			} else {
				// a[i]が9なら
				a[i] = '0'
				for (int k = i-1; k>=0; k--) {
					if (a[k]=='8') {
						a[k] = '0';
					} else {
						a[k] += 2;
					}
				}
			}
			break;
		}
	}

	if (a[0] == '0') {
		a = '1' + a;
	}

	return stoll(a);
}

int main(){

	int t;
	cin >> t;
	rep(z,t){

		ll n;
		cin >> n;
		ll s = make_s(n);
		ll b = make_b(n);
		ll ans;
		if (n-s <= b-n) {
			ans = n-s;
		} else {
			ans = b-n;
		}

		cout << "Case #" << z+1 << ": " << ans << endl;
	}
}
		
