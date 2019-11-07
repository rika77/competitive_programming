#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	cin >> n;
	int a[25] = {};
	int b[25] = {};
	int c[25] = {};

	int sum = 0;
	rep(i,n) {
		cin >> a[i];
	}

	rep(i,n) {
		cin >> b[i];
		sum += b[i];
	}

	rep(i,n-1) {
		cin >> c[i];
	}

	rep(i,n-1) {
		if (a[i] +1 == a[i+1]) {
			sum += c[a[i]-1];
		}
	}

	cout << sum << endl;
}

