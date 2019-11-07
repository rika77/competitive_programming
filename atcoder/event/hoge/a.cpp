#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n,k;
	cin >> n>>k;
	if (k==1) {
		cout << "0" << endl;
		return 0;
	}
	cout << n-k << endl;
}
