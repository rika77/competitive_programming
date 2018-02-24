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

double cal(double n,double m) {
	double mother=1.0,child=2.0;
	FOR(i,n+1,n+m+1) {
	mother *= i;
	}
	FOR(i,n-m+1,m+1) {
	child *= i;
	}
	return 1.0 - child/mother;
}	
	

int main(){
	int t;
	cin >> t;
	rep(i,t){
	double n,m;
	cin >> n>>m;
	if (!m) {
	cout << "Case #" << i+1 << ": 1.00000000" << endl;
	}
	else {
	cout << "Case #" << i+1 << ": "<<cal(n,m) << endl;
	}
	}
	return 0;
}
