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
	int cnt =0;
	int n;
	char k;
	cin >> n;
	int a[4] = {};
	rep(i,n){
		cin >> k;
		if (k=='P') a[0]++;
		else if (k=='W') a[1]++;
		else if (k=='G') a[2]++;
		else a[3]++;
	}
	rep(i,4){
		if (a[i]) cnt++;
	}
	if (cnt == 4) cout << "Four" << endl;
	else cout << "Three" << endl;

	return 0;

}
