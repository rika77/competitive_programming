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
#define MAX 2000000000000
typedef long long ll;
int main(){
	ll a,k;
	cin >> a>>k;
	ll cnt = 0;

	if (k==0) cout << MAX - a << endl;
	else {
	while(a<MAX){
		a += 1+k*a;
		cnt++;
	}
	cout << cnt << endl;
	}
	return 0;
}
	
