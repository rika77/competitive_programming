#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	cin >> n;
	int ma = 0;
	int sum = 0;
	rep(i,n) {
		int a;
		cin >> a;
		ma = max(a, ma);
		sum += a;
	}

	sum -= ma/2;
	cout << sum << endl;
	return 0;
}