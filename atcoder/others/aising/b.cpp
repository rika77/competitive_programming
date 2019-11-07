#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n,a,b;
	int p;

	cin >> n>>a>>b;
	int c1=0,c2=0,c3=0;

	rep(i, n) {
		cin >> p;
		if (p <= a) {
			c1++;
		} else if (p >= b+1) {
			c3++;
		} else {
			c2++;
		}
 	}
 	int mi = min(c1,c2);	
 	cout << min(mi, c3) << endl;
 	return 0;
 }

