#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int a,b,k;
	cin >> a>>b>>k;
	int n = min(a,b);

	for (int i = n; i>=0; i--) {
		if (a%i==0 && b%i==0) {
			k--;
			if (k==0) {
				cout << i << endl;
				return 0;
			}
		}
	}
}
