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
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	string ans = "IT'S OVER 9000";
	string sil = "...";
	int a[20] = {0,0,0,0,0,8999,8989,8889,8994,8993,8992,8991,8990,8989,8988,8987,8986,8986,8985,8984};
	rep(i,t){
	int d;
	cin >> d;
	if (d<=4) cout << "Case #" << i+1 << ": " << sil << endl;
	else {
	rep(j,a[d]){
	ans += "!";
	}
	cout << "Case #" << i+1 << ": " << ans << endl;
	}
	}
	return 0;
}
