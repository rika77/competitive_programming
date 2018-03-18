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
	cin >> n;
	int a;
	vector<int> v;
	rep(i,n){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	bool flag = 0;
	//だめなら1になるflag
	if (n%2==1) {
		if (v[0]!=0) {
			flag = 1;
		}
		for (int i=1;i<n;i+=2) {
			if (v[i]==i+1&&v[i+1]==i+1) {
				continue;
			}
			else {
				flag = 1;
				break;
			}
		}
	}
	else {
		for (int i=0;i<n;i+=2) {
			if (v[i]==i+1&&v[i+1]==i+1) {
				continue;
			}
			else {
				flag = 1;
				break;
			}
		}
	}

	if (flag) {
		cout << "0" << endl;
	}
	else {
		ll cn = n/2;
		ll ans = 1;
		rep(i,cn){
			ans *= 2;
			ans %= 1000000007;
		}
		
		cout << ans << endl;
	}
}
