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
typedef pair<ll, ll> P;

int main(){
	ll m=0;
	vector<P> v;
	ll a;
	ll sub[4] = {1,2,4,8};	//2lあたりの値段に変換
	rep(i,4){
		cin >> a;
		//v.push_back(P(sub[i], (a*8)/sub[i]));
		v.push_back(P((a*8)/sub[i], sub[i]));
	}
	sort(v.begin(), v.end());
/*
	rep(i,4){
		cout << v[i].first << " " << v[i].second << endl;
	}
*/
	ll n;
	cin >> n;
	n*=4;

	while(n>0){
		rep(i,4){
			if (n>=v[i].second){
				ll sub = n/v[i].second;
				n -= sub * v[i].second;
				m += sub * v[i].second * v[i].first;
			}
		}
	}

	cout << m/8 << endl;
	return 0;
}


