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
	ll x=1,y=1;
	ll l,r;
	rep(i,n){
		cin >> l>> r;
		ll rx = (x+l-1)/l;
		ll ry = (y+r-1)/r;
		ll mi = max(rx, ry);
		x=l*mi;
		y=r*mi;
	}
	cout << x + y << endl;
}
		
