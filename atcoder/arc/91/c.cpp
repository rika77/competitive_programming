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
	ll h,w;
	cin >> h>>w;
	if (h>w) swap(h,w);

	if (h==1) {
		if (w==1) cout << "1" << endl;
		else cout << w-2 << endl;
	}
	else if (h==2) {
		cout << "0" << endl;
	}
	else {
		cout << (h-2)*(w-2) << endl;
	}
	return 0;
}
