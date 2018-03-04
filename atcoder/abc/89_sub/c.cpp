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
	string s;
	ll cnt[5]={};
	for(int k=0;k<n;k++){
		cin >> s;
		if (s[0]=='M') cnt[0]++;
		else if (s[0]=='A') cnt[1]++;
		else if (s[0]=='R') cnt[2]++;
		else if (s[0]=='C') cnt[3]++;
		else if (s[0]=='H') cnt[4]++;
	}
	ll ans = 0;
	FOR(i,0,3){
		FOR(j,i+1,4){
			FOR(k,j+1,5){
				ans += cnt[i]*cnt[j]*cnt[k];
			}}}
	cout << ans << endl;
	return 0;
}

