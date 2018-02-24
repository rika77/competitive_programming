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
	int n,l,r,a;
	cin >> n>>l>>r;
	rep(i,n) {
	cin >> a;
	if (i) cout << " ";
	if (a<=l) cout << l;
	else if (a>=r) cout << r;
	else cout << a;
	}

	cout << endl;
	return 0;
}
