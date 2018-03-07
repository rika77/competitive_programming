#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<numeric>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int gcd(int a,int b){
	//aとbの最大公約数
	//a>bにしたい
	if (a<b) return gcd(b,a);
	if (a%b==0) return b;
	return gcd(b,a%b);
}

//return return かぶるんじゃね？って思っちゃうけど、全部return するんやなぁ.

int main(){
	 int n,k;
	 cin >> n>>k;
	 int a,ma,b;
	 cin >> a;
	 ma = b = a;
	 rep(i,n-1){
		cin >> a;
		b = gcd(a,b);
		ma = max(ma,a);
	 }
	 if (k%b!=0 || k>ma){
		 cout << "IMPOSSIBLE" << endl;
	 }
	 else {
		 cout << "POSSIBLE" << endl;
	 }

	 return 0;
}


