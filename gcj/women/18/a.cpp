#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
#include<stack>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	int k;
	cin >> k;
	int a;
	vector<int> v;
	rep(j,k){
	cin >> a;
	v.push_back(a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());


	ll sum = 0;

	int di = k/2;
	
	if(k%2==0){
	rep(j,di){
	int res = di - 1 - j;
	int mahi = v[2*j] - res;
	sum += mahi * mahi;
	int mahi2 = v[2*j + 1] - res;
	sum += mahi2 * mahi2;
	}
	}

	else{
	sum = (di - v[0])*(di - v[0]);
	rep(j,di){
	int res = di - 1 - j;
	int mahi = v[2*j+1] - res;
	sum += mahi*mahi;
	int mahio = v[2*j+2] - res;
	sum += mahio*mahio;
	}
	}
	cout << "Case #" << i+1 << ": " << sum << endl;
	}
	return 0;
}
