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

	int n,c,k,a;
	vector<int> v;
	cin >>n>>c>>k;
	rep(i,n){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	a = v[0];
	int t;
	int cnt =1,bus=1;
	FOR(i,1,n){
		t = v[i];
		if (cnt >= c||t>a+k){
			a=t;
			cnt=1;
			bus++;
		}
		else{
			cnt++;
		}
//		cout << bus << " " << i << " " << v[i] <<  endl;
	}
	cout << bus << endl;
	return 0;
}
