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
	int a,b,c,x;
	cin >> a>>b>>c>>x;
	x /= 50;
	int cnt=0;

	for(int i=0;i<=a;i++) {
	for(int j=0;j<=b;j++) {
	for(int k=0;k<=c;k++) {
	if (10*i+2*j+k == x) {
	cnt++;
	}}}}

	cout << cnt << endl;
	return 0;
}
