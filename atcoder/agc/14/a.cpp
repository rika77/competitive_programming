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
	ll a,b,c;
	cin >> a>>b>>c;
	ll cnt = 0;
	if (a%2 ||b%2||c%2) cout << "0" << endl;
	else if (a==b&&b==c){
		cout << "-1" << endl;
	}
	else {
		while (a%2==0 && b%2==0 && c%2==0) {
			ll tea = a,teb=b,tec=c;
			a = (teb+tec)/2;
			b = (tea+tec)/2;
			c = (tea+teb)/2;
			cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}
