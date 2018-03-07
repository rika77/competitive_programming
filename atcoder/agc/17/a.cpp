#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (ll i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	ll n;
	int p;
	ll cnt0=0,cnt1=0;
	int a;
	cin >> n>>p;
	rep(i,n){
		cin >> a;
		if (a%2){
			cnt1++;
		}
	}
	cnt0 = n - cnt1;
	//p==1
//	cout << cnt0 << " " << cnt1 << endl;
	ll ans = (ll)pow(2.0, n-1);
	if(cnt1==0) {
		if(p) {
			cout << "0" << endl;
		}
		else {
			cout << (ll)pow(2.0,n) << endl;	//へんになる時があるらしい、ちゃんとll変換しよう.

		}
	}
	else {
	cout << ans << endl;
	}
	return 0;
}

