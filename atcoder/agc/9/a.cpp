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
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<ll,ll> P;
int main(){
	vector<P> v;
	int n;
	cin >> n;
	int a,b;
	rep(i,n){
		cin >> a>>b;
		v.push_back(P(a,b));
	}
	ll cnt = 0;
	for(int i=n-1;i>=0;i--){
		v[i].first += cnt;
		if (v[i].first%v[i].second==0) continue;
		else cnt += (v[i].first/v[i].second + 1)*v[i].second - v[i].first;
	}

	// 割り切れるときと、それ以外で場合分けしようね
	cout << cnt << endl;
	return 0;
}
