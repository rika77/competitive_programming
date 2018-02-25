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

	ll a[61];
	a[0]=1;
	FOR(k,1,60){
		a[k] = a[k-1] * 2;
	}
	int t;
	cin >> t;
	rep(i,t){
	ll p;
	cin >> p;
	bool done = 0;
	int set = 59;
	rep(j,61){
		if (p==a[j]){
			done = 1;
		}
		else if (p < a[j]) {
			set = j-1;
			break;
		}
	}
	if (done) {
		cout << "Case #" << i+1 << ": " << "0" << endl;
		continue;
	}
	int cnt =0;
	while(!(p==0 || p==1)){
		while(p < a[set]){
			set--;
		}
		p = 2*a[set] - p;
		cnt++;
		set--;
	}
	if(cnt%2==0) {
		cout << "Case #" << i+1 << ": " << "0" << endl;
	}
	else {
		cout << "Case #" << i+1 << ": " << "1" << endl;
	}

	}
	return 0;
}


