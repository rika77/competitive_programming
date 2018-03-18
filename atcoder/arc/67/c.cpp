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
	ll n;
	cin >> n;
	map<int,ll> m;
	//まず2~nまで約数をmapに入れてく
	FOR(i,2,n+1){
		int sub = i;
		while (sub%2==0) {
			m[2]++;
			sub /= 2;
		}
		for(int j=3;j<=sub;j+=2){
			while(sub%j==0){
				m[j]++;
				sub /= j;
			}
		}
	}
	ll ans = 1;
	for (auto&item : m){
	//	cout << ans << " " << item.first << "  "<< item.second << endl;
		ans *= item.second + 1;
		ans %= 1000000007;
	}
	cout << ans << endl;
}


