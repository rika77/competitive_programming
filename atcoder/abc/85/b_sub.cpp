#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(ll)(n);++(i))


int main() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	rep(i,n) cin>>v[i];
	sort(v.begin(),v.end());
	// rep(i,n) cout<<v[i]<<endl;	
	v.erase(unique(v.begin(),v.end()), v.end());
	// どうやた、uniqueの末尾には残骸が残るので消す必要あり
	cout << v.size() << endl;
	return 0;
}

