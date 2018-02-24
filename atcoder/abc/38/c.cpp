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
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int a[100001] = {};
	rep(i,n) cin >> a[i];
	
	ll ans = n;
	ll cnt = 0;
	rep(i,n+1){
	if (a[i]<a[i+1]) cnt++;
	else {
	ans += cnt*(cnt+1)/2;
	cnt = 0;
	}
	}
	cout << ans << endl;
	return 0;
}
