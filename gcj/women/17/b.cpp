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

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	int n;
	double a;
	cin>>n;
	vector<double> v;
	int n_d = 2*n;
	rep(j,n_d){
	cin >> a;
	v.push_back(a);
	}
	sort(v.begin(),v.end());
	double ans = 1.0;

	rep(j,n){
	ans *= 1.0 - v[j] * v[2*n-j-1];
	}

	cout << "Case #" << i+1 << ": " << ans << endl;
	}
	return 0;
}
