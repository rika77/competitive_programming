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
	int n,a;
	cin >> n;
	vector<ll> v,v2;
	rep(i,n){
	cin >> a;
	while(a%2==0){
	a /= 2;
	}
	v.push_back(a);
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());

/*
	int cnt;
	v2.push_back(v[0]*2);
	cnt = 1;

	FOR(i,1,n){
	if(find(v2.begin(),v2.end(),v[i]) == v2.end()) //かぶってない
	cnt++;
	
	v2.push_back(v[i]*2);
	}
*/
	cout << v.size() << endl;
	return 0;
}
