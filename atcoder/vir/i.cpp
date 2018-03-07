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
	string sub,a,l;
	ll a_num[10000];
	ll l_num[10000];
	rep(i,n){
		cin >> a_num[i] >> l_num[i];
		a = a_num[i].to_s;
		l = l_num[i].to_s;
		rep(j,l.size()){
			sub += a;
		}
	}
	int b;
	ll ans;
	for(i=n-1;i>=0;i--){
		a_num[i] = a_num[i]%b;

