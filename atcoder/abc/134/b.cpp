#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n,d;
	cin >> n>>d;

	if (n%(2*d+1)) {
		cout << n/(2*d+1) + 1 << endl;
	} else {
		cout << n/(2*d+1) << endl;
	}
}