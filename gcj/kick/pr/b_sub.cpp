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
	int t;
	cin >> t;
	rep(i,t){
	double n,m;
	cin >> n>>m;
	cout << "Case #" << i+1 << ": " << (n-m)/(n+m) << endl;
	}
	return 0;
}	
