#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 1000000007
typedef long long ll;
int main(){

	ll n;
	string s;
	cin >> n>>s;

	map<char, ll> m;

	rep(i,n) {
		if (m[s[i]]==0) {
			m[s[i]]=1;
		} else {
			m[s[i]]++;
		}
	}

	ll ans = 1;
	for (auto &item:m) {
		ans %= MAX;
		ans = ans * (item.second+1);
	}

	ans--;
	ans %= MAX;

	cout << ans << endl;
}