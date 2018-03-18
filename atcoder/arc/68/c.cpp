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
	ll x;
	cin >> x;

	ll ans = (x/11)*2;
	if (x%11 > 0 && x%11 <= 6) ans++;
	else if (x%11 >= 7) ans += 2;
	
	cout << ans << endl;
}
