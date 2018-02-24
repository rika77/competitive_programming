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
#define MAX 100001
typedef long long ll;

int main(){
	int n;
	cin >> n;
	//メモリを動的に確保する(かpush_backとかね)
	//int a[MAX]={},b[MAX]={},c[MAX]={};
	int *a = new int[MAX];
	int *b = new int[MAX];
	int *c = new int[MAX];
	rep(i,n) cin >> a[i];
	rep(i,n) cin >> b[i];
	rep(i,n) cin >> c[i];
	sort(a,a+n);
	sort(b,b+n);
	sort(c,c+n);

	ll cnt = 0;
	rep(i,n){
		ll up = upper_bound(a,a+n,b[i]-1) - a;
		ll low = c+n-lower_bound(c,c+n,b[i]+1);
		cnt += up * low;
	}
	cout << cnt << endl;
	return 0;
}
	
