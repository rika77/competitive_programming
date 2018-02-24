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
	n += 2;
	ll cnt = 0;
	while(n >= 2){
		n /= 2;
		cnt++;
	}
	if (cnt%2==1){
		cout << "Aoki" << endl;
	}
	else{
		cout << "Takahashi" << endl;
	}
	return 0;
}

