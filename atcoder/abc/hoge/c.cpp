#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

vector<ll> A;
int n;
ll gcd (ll a, ll b) {
	if (b==0) return a;
	return gcd(b, a%b);
}

ll solve(int el) {
	ll ans = -1;
	rep(i,n) {
			if (i == el) {
				continue;
			}
			if (ans == -1) {
				ans = A[i];
			} else {
				ans = gcd(ans, A[i]);
			}
		}
		return ans;
}

int main(){
	
	
	cin >> n;
	rep(i,n) {
		ll a;
		cin >> a;
		A.push_back(a);
	}

	ll mi;
	ll koho1,koho2;
		for (int i = 0; i<n-1; i++) {
			if (!i || mi > gcd(A[i], A[i+1])) {
				mi = gcd(A[i], A[i+1]);
				koho1 = i;
				koho2 = i+1;
			}
		}

	ll ans1 = solve(koho1);
	ll ans2 = solve(koho2);
	ll ans3 = solve(n-1);
	ll ans4 = solve(0);

	ll ans = max(max(ans1,ans2), max(ans3,ans4));
	cout << ans << endl;
	}



