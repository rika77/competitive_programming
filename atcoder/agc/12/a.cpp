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
int main(){
	int n;
	vector<ll> v;
	ll a;
	cin >> n;
	rep(i,n*3){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());

	ll sum = 0;
	for(int i = 1;i<2*n;i+=2){
		sum += v[i];
	}

	cout << sum << endl;
	return 0;
}
