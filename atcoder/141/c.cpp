#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	ll n,k,q;
	cin >> n>>k>>q;

	ll cnt[100005] = {};

	rep(i,q) {
		ll a;
		cin >> a;
		a = a-1;
		cnt[a]++;
	}

	ll base = k-q;
	rep(i,n) {
		ll real = base + cnt[i];
		if (real <= 0) {
			cout << "No"<< endl;
		} else {
			cout << "Yes"<<endl;
		}
	}

}