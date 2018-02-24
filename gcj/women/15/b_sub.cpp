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

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	ll k,v;
	ll cnt =0;
	cin >> k>>v;
	rep(a,k+1){
	rep(b,k+1){
	rep(c,k+1){
	if (abs(a-b)<=v && abs(b-c)<=v && abs(a-c)<=v){
	cnt++;
	}}}}
	
	cout << "Case #" << i+1 << ": " << cnt << endl;
	}
	return 0;
}
