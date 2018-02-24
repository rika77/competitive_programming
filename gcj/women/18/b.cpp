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
#include<stack>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	int n,a,b;
	int ceo;
	cin >> n;
	rep(j,n){
	cin >> a>>b;
	if(a<=b) ceo = b+1;
	else ceo = a;
	}
	cout << "Case #" << i+1 << ": " << ceo << endl;
	}
	return 0;
}
