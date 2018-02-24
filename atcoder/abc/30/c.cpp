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
#define MAX 100000
typedef long long ll;
int main(){
	int n,m,x,y;
	cin >> n>>m>>x>>y;
	int a[MAX]={},b[MAX]={};

	rep(i,n) cin >> a[i];
	rep(i,m) cin >> b[i];

	int cnt=0;
	ll sua,sub;
	int next_a=1,next_b=0;
	sub = a[0]+x;

	bool end = false;

	while(1){	
	FOR(i,next_b,m){
	if(b[i]>=sub){
	next_b = i+1;
	sua = b[i]+y;
//	cout << "b_i"<<i << endl;
//	cout << "cnt" << cnt << endl;
	cnt++;
	break;
	}
	if(i==m-1){
	end = true;
	}
	}
	if (end) break;
	FOR(i,next_a,n){
	if(i==n-1) end = true;
	if(a[i]>=sua){
	next_a = i+1;
	sub = a[i]+x;
//	cout << "a_i"<<i << endl;
	break;
	}
	}
	}
	
	cout << cnt << endl;
	return 0;

}
