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
	rep(i,t){
	int n;
	cin >> n;
	char b;
	int sub = 8*n;
	int a[sub];
	rep(j,8*n){
	cin >> b;
	
	if (b=='O') {
	a[j] = 0;
	}
	else {
	a[j] = 1;
	}
	}	
	string ans;	//¤¢¤ä¤·
//	int k=0;
	for(int j=0;j<sub;j+=8){
	char c;
	c = a[j]*128 + a[j+1]*64 + a[j+2]*32 +a[j+3]*16 +a[j+4]*8 +a[j+5]*4 +a[j+6]*2 +a[j+7]*1;

	ans += c;
	}

	cout << "Case #" << i+1 << ": " << ans << endl;
	}

	return 0;
}
